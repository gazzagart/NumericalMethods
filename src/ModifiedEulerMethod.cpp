#include "ModifiedEulerMethod.hpp"
#include <iostream>

void ModifiedEulerMethod::computeFunction()
{
    //TODO: Modified version of Eulers method.
    // First find the next y value using the simple Euler method
    std::cout << std::setprecision(10) << modifiedEulersFunction() << std::endl;
}

double ModifiedEulerMethod::modifiedEulersFunction()
{
    // Works out how many times to run Euler's method.
    double length =  getEndVal()/getStep();
    for (int i = 0; i < length; i++)
    {
        y1 = nextY();
        x1 = getX() + getStep();
        y1c = getY() + getStep() * (function() + function(x1,y1))/2;
        std::cout << "x: " << getX() << std::endl;
        std::cout << "y: " << getY() << std::endl;
        std::cout << "x1: " << x1 << std::endl;
        std::cout << "y1: " << y1 << std::endl;
        std::cout << "function: " << std::setprecision(10) << function() << std::endl;
        std::cout << "function(x1,y1): " << std::setprecision(10) << function(x1,y1) << std::endl;
        std::cout << "yc: " << std::setprecision(10) << y1c  << std::endl;
        setY(y1c);
        setX(getX() + getStep());
    }
    return getY();
}