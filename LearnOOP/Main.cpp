#include <iostream>
#include <cmath>
#include <string>
#include <functional>

#include "Pointclass.h"
#include "DynamicArray.h"
#include "DogClass.h"
#include "LineClass.h"
#include "PluralClass.h"
#include "VirtualClass.h"
#include "SmartPtrClass.h"

class Ibicycle
{
public:
    virtual void ride() = 0;

    virtual ~Ibicycle() = 0;
};

Ibicycle::~Ibicycle() {};

class CoolBicycle : public Ibicycle
{
public:
    void ride() override
    {
        std::cout << "I ride on cool bicycle!\n";
    }

    ~CoolBicycle() override {}
};


class Human
{
public:
    void rideOnBicycle(Ibicycle& bicycle)
    {
        bicycle.ride();
    }

};

int main()
{
    CoolBicycle b;
    Human x;

    x.rideOnBicycle(b);

    return 0;
}
