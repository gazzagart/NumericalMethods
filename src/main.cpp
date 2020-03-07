#include <iostream>
#include "EulerMethodDiffs.hpp"
#include "ModifiedEulerMethod.hpp"

// double differentialEquation(double x, double y) { return -x * pow(y,2); }
double differentialEquation(double x, double y) { return x/y; }

int main() {
    EulerMethodDiffs simpleEuler = EulerMethodDiffs(&differentialEquation, 0.2, 0, 1.0, 1.0);
    simpleEuler.computeFunction();
    // ModifiedEulerMethod modifiedMethod = ModifiedEulerMethod(&differentialEquation, 0.2, 0, 2.0, 1.0);
    // modifiedMethod.computeFunction();

    return 0;
}