#pragma once
#include <iostream>

class Collar // ������������
{
public:

	void setCollar()
	{
		if (!collar)
			collar = true;
	}

	bool CheckCollar() { return collar; }

private:
	bool collar = false;
};


class Dog
{
public:
	void run()
	{
		if (c.CheckCollar())
			std::cout << "Dog run with collar!\n";
		else
			f.run();
	}

	void setCollar()
	{
		c.setCollar();
	}

private:

	class Legs //���������
	{
	public:
		void run() { std::cout << "Dog run!\n"; }

	};

	Legs f;
	Collar c;
};