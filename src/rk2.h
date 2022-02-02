#ifndef RK2_H
#define RK2_H
#include <iostream>
#include <vector>

#include "../lib/eigen-3.4-rc1/Eigen/Core"
#include "../lib/eigen-3.4-rc1/Eigen/Dense"
#include "base_ode.h"
#include "rhs_func.h"

class RK2 : public Base_ODE {
 public:
  RK2(const double, const double, const double, Eigen::VectorXd, int f = 1);
  void solve() override;
};
#endif