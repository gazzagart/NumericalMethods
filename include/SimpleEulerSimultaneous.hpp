#pragma once

#include "EulerMethodDiffs.hpp"

class SimpleEulerSimultaneous: public EulerMethodDiffs  {

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
    SimpleEulerSimultaneous(functionuserT diff1, functionuserT diff2, double step, double xVal1, double yVal1, double xEnd1, double xVal2, double yVal2, double xEnd2, double tVal);
    void computeFunction();

private:
    EulerMethodDiffs func1;
    EulerMethodDiffs func2;
    double SimultaneousEulersFunction();
};