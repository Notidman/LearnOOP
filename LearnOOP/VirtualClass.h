#pragma once

class Weapon
{
public:
	virtual void Shoot() = 0;
};

class Pistol : public Weapon
{
public:
	void Shoot() override
	{
		std::cout << "Pistol shot!" << std::endl;
	}
};

class Rifle : public Weapon
{
public:
	void Shoot() override
	{
		std::cout << "Rifle shot!" << std::endl;
	}
};

class Player
{
public:
	Player() { w = nullptr; }

	void setWeapon(Weapon& w) { this->w = &w; }

	void Shoot()
	{
		if (w == nullptr) std::cout << "No gun :(";
		else w->Shoot();
	}

private:
	Weapon* w;
};