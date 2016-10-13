#pragma once
#include <GL/glew.h>
#include "Sprite.h"

class Sprite
{
public:
	Sprite();
	~Sprite();

	void init(float x, float y, float width, float height);

	void draw();

private:
	float _x;
	float _y;
	float _width;
	float _height;

	// GLuint stands for GL unsigned int, used for vertex buffer objects
	GLuint _vboID;

};

