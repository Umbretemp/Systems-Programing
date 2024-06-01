#pragma once
class TriangleHeap
{
private:
	float* mBase = (float*)nullptr;
	float* mHeight = (float*)nullptr;

public:

	void setBase(float base) { *mBase = base; }
	void setHeight(float height) { *mHeight = height; }

};

