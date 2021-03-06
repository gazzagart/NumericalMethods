#pragma once

#include <cmath>
#include <iomanip>      // std::setprecision
#include <iostream>

/*
* This states that the parameter functionuser will be a pointer to a function which has a double return type and which
* takes a two doubles as parameters. We will store the function that we want to compute here.
*/
typedef double (*functionuser)(double,double);

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
 * @param function user diff: The two variable differential exquation defined as func(double x,double y)
*/
    EulerMethodDiffs(functionuser diff, double step, double xVal, double yVal, double xEnd)
    :func(diff), h(step), x(xVal), y(yVal), endVal(xEnd) {}
/*
* Constructor to solve simple intial value differential equation, using simple Euler method.
* This method calls another constructor with all values initilised.
* @brief Simlpe Euler method solving differential function
*/
    inline double getY() const {return y;}
    inline double getX() const {return x;}
    inline double getEndVal() const {return endVal;}
    inline double getStep() const {return h;}
    inline void setY(double mY) {y = mY;}
    inline void setX(double mX) {x = mX;}
    virtual void computeFunction();
    inline double function(double nX, double nY) const {return func(nX,nY);};
    /// returns the next y value implementing Euler's method
    inline double nextY() const {return y + h*(function(x,y));};
private:
    functionuser func;
    double EulersFunction();
    double h, x, y, endVal;
};