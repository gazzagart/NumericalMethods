#include <iostream>
#include "EulerMethodDiffs.hpp"
#include "ModifiedEulerMethod.hpp"
#include "SimpleEulerSimultaneous.hpp"

// double differentialEquation(double x, double y) { return -x * pow(y,2); }
double differentialEquation(double x, double y) { return x*y - 2; }
double differentialEquationT1(double x, double y, double t) { return pow(y,2) + t; }
double differentialEquationT2(double x, double y, double t) { return x*y - 2; }

int main() {
    // EulerMethodDiffs simpleEuler = EulerMethodDiffs(&differentialEquation, 0.1, 0, 2, 1.0);
    // simpleEuler.computeFunction();
    // ModifiedEulerMethod modifiedMethod = ModifiedEulerMethod(&differentialEquation, 0.001, 0, 2.0, 1.0);
    // modifiedMethod.computeFunction();
    SimpleEulerSimultaneous simul = SimpleEulerSimultaneous(&differentialEquationT1,&differentialEquationT2,0.1,0,2,1,0,1,1,0);
    simul.computeFunction();

    return 0;
}