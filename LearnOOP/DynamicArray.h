#pragma once

class DynamicArray
{
private:
	int size;
	int* arr;

public:

	void printArray();

	DynamicArray(const DynamicArray& a);
	const DynamicArray& operator = (const DynamicArray& other);
	DynamicArray(int* arr,const int size);
	~DynamicArray();
};