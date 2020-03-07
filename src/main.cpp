#include <iostream>
#include "EulerMethodDiffs.hpp"
#include "ModifiedEulerMethod.hpp"

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    // EulerMethodDiffs simpleEuler = EulerMethodDiffs((double)(0.2),0,1.0,1.0);
    // simpleEuler.computeFunction();
    ModifiedEulerMethod modifiedMethod = ModifiedEulerMethod((double)(0.2), 0, 2.0, 1.0);
    modifiedMethod.computeFunction();
    return 0;
}