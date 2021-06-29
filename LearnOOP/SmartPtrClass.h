#pragma once

template<class T>
class SmartPointer
{
public:

	SmartPointer(T* ptr) : ptr(ptr) {}

	~SmartPointer()
	{
		delete ptr;
	}

	T& operator*() { return *ptr; }

private:
	T* ptr;
};
