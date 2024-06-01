#pragma once
class TriangleStack
{
private:
	float mBase;
	float mHeight;

public:

	void setBase(const float& base) { mBase = base; }
	void setHeight(const float& height) { mHeight = height; }

	float GetArea(); 
};

