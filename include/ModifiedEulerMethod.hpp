#pragma once

#include "EulerMethodDiffs.hpp"

class ModifiedEulerMethod: public EulerMethodDiffs {

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
    ModifiedEulerMethod(functionuser diff, double step, double xVal, double yVal, double xEnd)
    : EulerMethodDiffs(diff,step,xVal,yVal,xEnd) {} //Call to parent class constuctor
    void computeFunction();
private:
    double modifiedEulersFunction();
    double x1, y1, y1c;

};