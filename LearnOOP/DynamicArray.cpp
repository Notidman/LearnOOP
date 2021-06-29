#include "DynamicArray.h"
#include <iostream>

DynamicArray::DynamicArray(int* arr, const int size) : size(size)
{
	this->arr = new int[size];
	for (int i = 0; i < size; ++i) this->arr[i] = arr[i];
}

DynamicArray::~DynamicArray()
{
	delete[] arr;
	arr = nullptr;
}

void DynamicArray::printArray()
{
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

DynamicArray::DynamicArray(const DynamicArray& a) : size(a.size)
{
	this->arr = new int[size];
	for (int i = 0; i < size; ++i) this->arr[i] = a.arr[i];
}

const DynamicArray& DynamicArray::operator = (const DynamicArray& other)
{
	delete[] arr;

	this->size = other.size;
	this->arr = new int[this->size];

	for (size_t i = 0; i < this->size; ++i)
		this->arr[i] = other.arr[i];

	return *this;
}