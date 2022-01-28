#ifndef IMP_EULER_H_
#define IMP_EULER_H_
#include <iostream>
#include <vector>

#include "../lib/eigen-3.4-rc1/Eigen/Core"
#include "../lib/eigen-3.4-rc1/Eigen/Dense"
#include "base_ode.h"
#include "rhs_func.h"

class imp_euler : public Base_ODE {
  Eigen::MatrixXd dG(const Eigen::VectorXd &v, double t);
  Eigen::VectorXd G(const Eigen::VectorXd &y_curr,
                    const Eigen::VectorXd &y_prev, double t);

 public:
  imp_euler(const double, const double, const double, Eigen::VectorXd,
            int f = 1);
  void solve() override;
  virtual ~imp_euler() = default;
};

#endif  // IMP_EULER_H_