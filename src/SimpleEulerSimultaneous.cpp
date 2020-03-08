#include "SimpleEulerSimultaneous.hpp"



SimpleEulerSimultaneous::SimpleEulerSimultaneous(functionuserT diff1, functionuserT diff2, double step, double xVal1, double yVal1, double xEnd1, double xVal2, double yVal2, double xEnd2, double tVal) {
  func1 = EulerMethodDiffs(diff1,step,xVal1,yVal1,xEnd1,tVal);
  func2 = EulerMethodDiffs(diff2,step,xVal2,yVal2,xEnd2,tVal);
}

void SimpleEulerSimultaneous::computeFunction()
{
  std::cout << std::setprecision(10) << SimultaneousEulersFunction()  << std::endl;
}

double SimpleEulerSimultaneous::SimultaneousEulersFunction() {
  std::cout << "func1 start y: " << std::setprecision(10) << func1.getY()  << std::endl;
  std::cout << "func2 start y: " << std::setprecision(10) << func2.getY()  << std::endl;
  double length = func1.getEndVal()/func1.getStep();
  for (int i = 0; i <= length; i++)
  {
    double prevX = func1.getY();
    func1.setY(func1.nextYT());
    func2.setX(prevX);
    func2.setY(func2.nextYT());
    std::cout << "func1 y: " << std::setprecision(10) << func1.getY()  << std::endl;
    std::cout << "func2 y: " << std::setprecision(10) << func2.getY()  << std::endl;
    func1.setT(func1.getT() + func1.getStep());
    func2.setT(func2.getT() + func2.getStep());
  }
  return 1;
}