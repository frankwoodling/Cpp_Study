#include "GLSLProgram.h"
#include "Errors.h"

#include <fstream>
#include <vector>

GLSLProgram::GLSLProgram() : _programID(0), _vertexShaderID(0), _fragmentShaderID(0)
{
}


GLSLProgram::~GLSLProgram()
{
}


void GLSLProgram::compileShaders(const std::string& vertexShaderFilePath, const std::string& fragmentShaderFilepath) {
	_vertexShaderID = glCreateShader(GL_VERTEX_SHADER);

	if (_vertexShaderID == 0) {
		fatalError("Vertex shader failed to be created!");
	}

	_fragmentShaderID = glCreateShader(GL_VERTEX_SHADER);
	if (_vertexShaderID == 0) {
		fatalError("Fragment shader failed to be created!");
	}

	std::ifstream vertexFile(vertexShaderFilePath);
	if (vertexFile.fail()) {
		fatalError("Failed to open " + vertexShaderFilePath);
	}

	std::string fileContents = "";
	std::string line;

	while (std::getline(vertexFile, line)) {
		fileContents += line + "\n";
	}

	vertexFile.close();

	const char* contentsPtr = fileContents.c_str();
	glShaderSource(_vertexShaderID, 1, &contentsPtr, nullptr);

	glCompileShader(_vertexShaderID);

	GLint success = 0;
	glGetShaderiv(_vertexShaderID, GL_COMPILE_STATUS, &success);

	if (success == GL_FALSE)
	{
		GLint maxLength = 0;
		glGetShaderiv(_vertexShaderID, GL_INFO_LOG_LENGTH, &maxLength);

		// The maxLength includes the NULL character
		std::vector<GLchar> errorLog(maxLength);
		glGetShaderInfoLog(_vertexShaderID, maxLength, &maxLength, &errorLog[0]);

		// Provide the infolog in whatever manor you deem best.
		// Exit with failure.
		glDeleteShader(_vertexShaderID); // Don't leak the shader.

		std::printf("%s\n", &(errorLog[0]));
		fatalError("Vertex shader failed to compile");
		return;
	}
}

void GLSLProgram::linkShaders() {

}