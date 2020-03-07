#include <iostream>
#include "EulerMethodDiffs.hpp"
#include "ModifiedEulerMethod.hpp"

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    EulerMethodDiffs simpleEuler = EulerMethodDiffs((double)(0.001),0,1.0,1.0);
    simpleEuler.computeFunction();
    ModifiedEulerMethod modifiedMethod = EulerMethodDiffs((double)(0.001),0,1.0,1.0);
}