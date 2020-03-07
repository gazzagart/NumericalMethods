#pragma once

#include "EulerMethodDiffs.hpp"

class ModifiedEulerMethod: public EulerMethodDiffs {

public:
    ModifiedEulerMethod(double step, double xVal, double yVal, double xEnd)
    : h(step), x(xVal), y(yVal), endVal(xEnd) {}
private:
    // inline double function() {return -x * pow(y,2);};
    /// The differential function
    inline double function() {return x / y;};
    /// returns the next y value implementing Euler's method
    inline double nextY() {return y + h*(function());};
    double EulersFunction();
    double h, x, y, endVal;
};