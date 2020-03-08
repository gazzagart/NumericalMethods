#include "EulerMethodDiffs.hpp"

/*
 * Function to call simple Euler's method on a function until end value has been reached.
 * @return double: The (estimate) answer to the function at an x value
*/
double EulerMethodDiffs::EulersFunction()
{
  // Works out how many times to run Euler's method.
  double length = endVal/h;
  for (int i = 0; i <= length; i++)
  {
    std::cout << "x: " << std::setprecision(10) << x  << std::endl;
    std::cout << "y: " << std::setprecision(10) << y  << std::endl;
    y = nextY();
    x = x + h;
    std::cout << "y': " << std::setprecision(10) << y  << std::endl;
    std::cout << "y' * h: " << std::setprecision(10) << y * h  << std::endl;
  }
  return y;
}

void EulerMethodDiffs::computeFunction()
{
  std::cout << std::setprecision(10) << EulersFunction()  << std::endl;
}