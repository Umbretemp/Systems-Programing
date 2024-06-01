#pragma once
class TriangleHeap
{
private:
	float* mBase = new float;
	float* mHeight = new float;

public:
	TriangleHeap(); // default
	// rule of 3
	TriangleHeap& operator=(const TriangleHeap& _other); // assignment operator
	TriangleHeap(const TriangleHeap& _other); // copy constructor
	~TriangleHeap(); // destructor - gets called when object gets destroyed
	
	void setBase(float base) { *mBase = base; }
	void setHeight(float height) { *mHeight = height; }

	float GetArea();
};

