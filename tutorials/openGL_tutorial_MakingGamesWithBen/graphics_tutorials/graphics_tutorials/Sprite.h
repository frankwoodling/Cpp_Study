#pragma once
#include <GL/glew.h>

class Sprite
{
public:
	Sprite();
	~Sprite();

	void init(int x, int y, int width, int height);

	void draw();

private:
	int _x;
	int _y;
	int _width;
	int _height;

	// GLuint stands for GL unsigned int, used for vertex buffer objects
	GLuint _vboID;
};

