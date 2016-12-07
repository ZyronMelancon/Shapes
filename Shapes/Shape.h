#pragma once
#include <iostream>

struct pos
{
	float x, y;
};

class BaseShape
{
public:
	virtual void DebugPrint() = 0;
};

class Point : public BaseShape
{
public:
	pos position;
	void DebugPrint()
	{
		printf("Point position: %f, %f\n", position.x, position.y);
	}
};

class Line : public BaseShape
{
public:
	pos point1;
	pos point2;
	void DebugPrint()
	{
		printf("Line start position: %f, %f\nLine end position: %f, %f\n", point1.x, point1.y, point2.x, point2.y);
	}
};

class Rectangle : public BaseShape
{
public:
	float width;
	float height;
	pos position;
	void DebugPrint()
	{
		printf("Square width: %f\nSquare height: %f\nSquare position: %f, %f\n", width, height, position.x, position.y);
	}
};

class Circle : public BaseShape
{
public:
	float radius;
	pos position;
	void DebugPrint()
	{
		printf("Circle radius: %f\nCircle position: %f, %f", radius, position.x, position.y);
	}
};

class Triangle : public BaseShape
{
public:
	pos point1;
	pos point2;
	pos point3;
	void DebugPrint()
	{
		printf("Point 1 position: %f, %f\nPoint 2 position: %f, %f\nPoint 3 position: %f, %f\n", point1.x, point1.y, point2.x, point2.y, point3.x, point3.y);
	}
};