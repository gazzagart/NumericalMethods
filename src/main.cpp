#include <iostream>
#include "EulerMethodDiffs.hpp"
#include "ModifiedEulerMethod.hpp"

// double differentialEquation(double x, double y) { return -x * pow(y,2); }
// double differentialEquation(double x, double y) { return pow(y,2) + x; }
double differentialEquation(double x, double y) { return x*y - 2; }

int main() {
    EulerMethodDiffs simpleEuler = EulerMethodDiffs(&differentialEquation, 0.1, 2.986, 1.04, 1.0);
    simpleEuler.computeFunction();
    // ModifiedEulerMethod modifiedMethod = ModifiedEulerMethod(&differentialEquation, 0.001, 0, 2.0, 1.0);
    // modifiedMethod.computeFunction();

    return 0;
}