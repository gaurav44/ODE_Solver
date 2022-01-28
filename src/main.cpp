#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

#include "../lib/eigen-3.4-rc1/Eigen/Core"
#include "../lib/eigen-3.4-rc1/Eigen/Dense"
#include "base_ode.h"
#include "exp_euler.h"
#include "imp_euler.h"
#include "rk2.h"
#include "rk4.h"

int main() {
  // Dahlquist
  //   Eigen::VectorXd y_0(1);
  //   y_0(0) = 1;
  //   std::unique_ptr<Base_ODE> trial =
  //       std::make_unique<exp_euler>(0.01, 0, 5, y_0);

  //   trial->solve();
  //   trial->write_sol();

  // Population model peaceful neighbour
  // Eigen::VectorXd y_0(2);
  // y_0(0) = 0.5;
  // y_0(1) = 3;
  // std::unique_ptr<Base_ODE> trial = std::make_unique<RK2>(0.1, 0, 20, y_0);
  // trial->solve();
  // trial->write_sol();

  // Damped Pendulum
  Eigen::VectorXd y_0(2);
  y_0(0) = 1;
  y_0(1) = -1;
  std::unique_ptr<Base_ODE> trial = std::make_unique<RK4>(0.1, 0, 20, y_0);

  trial->solve();
  trial->write_sol();

  // Van der Poll Oscillator
  // Eigen::VectorXd y_0(2);
  // y_0(0) = 1;
  // y_0(1) = 1;
  // std::unique_ptr<Base_ODE> trial =
  //     std::make_unique<imp_euler>(0.1, 0, 20, y_0);

  // trial->solve();
  // trial->write_sol();
}