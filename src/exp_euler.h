#ifndef EXP_EULER_H
#define EXP_EULER_H
#include <iostream>
#include <vector>

#include "../lib/eigen-3.4-rc1/Eigen/Core"
#include "../lib/eigen-3.4-rc1/Eigen/Dense"
#include "base_ode.h"
#include "rhs_func.h"

class exp_euler : public Base_ODE {
  friend Eigen::VectorXd rhs(const Eigen::VectorXd &y, double t);

public:
  exp_euler(const double, const double, const double, Eigen::VectorXd,
            int f = 1);
  void solve() override;
};
#endif