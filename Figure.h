#pragma once
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>

class Figure
{
public:

    virtual double calculateS() const = 0;
    virtual double calculateP() const = 0;

    std::string getName() const;
    void setName(std::string figureName);

protected:
    std::string _name;
};

