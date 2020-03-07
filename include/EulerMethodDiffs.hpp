#pragma once

#include <cmath>
#include <iomanip>      // std::setprecision
#include <iostream>

/*
 * Euler's method for solving simple differential equations.
*/
class EulerMethodDiffs {

public:
/*
 * Constructor to solve simple intial value differential equation, using simple Euler method.
 * @brief Simlpe Euler method solving differential function
 * @param double step: The step size of each increment.
 * @param double xVal: The starting x value.
 * @param double yVal: The y value at the starting xVal.
 * @param double xEnd: The stop value for the step size.
*/
    EulerMethodDiffs(double step, double xVal, double yVal, double xEnd)
    : h(step), x(xVal), y(yVal), endVal(xEnd) {}
/*
* Constructor to solve simple intial value differential equation, using simple Euler method.
* This method calls another constructor with all values initilised.
* @brief Simlpe Euler method solving differential function
*/
    EulerMethodDiffs(): EulerMethodDiffs(0.2, 0, 1.0, 1.0){ std::cout << std::setprecision(10) << EulersFunction() << std::endl;}
    inline double getY() const {return y;}
    inline double getX() const {return x;}
    inline double getEndVal() const {return endVal;}
    inline double getStep() const {return h;}
    inline void setY(double mY) {y = mY;}
    inline void setX(double mX) {x = mX;}
    virtual void computeFunction();
    /// The differential function
    inline double function() {return -x * pow(y,2);};
    inline double function(double nX, double nY) {return -nX * pow(nY,2);};
    /// returns the next y value implementing Euler's method
    inline double nextY() {return y + h*(function());};
private:
    double EulersFunction();
    double h, x, y, endVal;
};