#include <gtest/gtest.h>

#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

// #include "../src/base_ode.cpp"
#include "../src/base_ode.h"
// #include "../src/exp_euler.cpp"
#include "../lib/eigen-3.4-rc1/Eigen/Core"
#include "../lib/eigen-3.4-rc1/Eigen/Dense"
#include "../src/exp_euler.h"
#include "../src/imp_euler.h"
#include "../src/rhs_func.cpp"
#include "../src/rhs_func.h"
#include "../src/rk2.h"
#include "../src/rk4.h"

using namespace std;

TEST(ImpEuler, tolerance) {
  Eigen::VectorXd y_0(1);
  y_0(0) = 1;
  double t_start{0};
  double t_end{5};
  double dt{0.01};
  std::unique_ptr<Base_ODE> trial =
      std::make_unique<imp_euler>(dt, t_start, t_end, y_0, 0);

  trial->solve();
  Eigen::MatrixXd sol = trial->get_sol();
  double tol{0.1};
  for (int i{0}; i < sol.cols(); i++) {
    ASSERT_GT(tol, std::abs(exp(-(t_start + i * dt)) - sol(0, i)));
  }
};

TEST(ExpEuler, tolerance) {
  Eigen::VectorXd y_0(1);
  y_0(0) = 1;
  double t_start{0};
  double t_end{5};
  double dt{0.01};
  std::unique_ptr<Base_ODE> trial =
      std::make_unique<exp_euler>(dt, t_start, t_end, y_0, 0);

  trial->solve();
  Eigen::MatrixXd sol = trial->get_sol();
  double tol{0.1};
  for (int i{0}; i < sol.cols(); i++) {
    ASSERT_GT(tol, std::abs(exp(-(t_start + i * dt)) - sol(0, i)));
  }
};

TEST(RK2, tolerance) {
  Eigen::VectorXd y_0(1);
  y_0(0) = 1;
  double t_start{0};
  double t_end{5};
  double dt{0.01};
  std::unique_ptr<Base_ODE> trial =
      std::make_unique<RK2>(dt, t_start, t_end, y_0, 0);

  trial->solve();
  Eigen::MatrixXd sol = trial->get_sol();
  double tol{0.1};
  for (int i{0}; i < sol.cols(); i++) {
    ASSERT_GT(tol, std::abs(exp(-(t_start + i * dt)) - sol(0, i)));
  }
};

TEST(RK4, tolerance) {
  Eigen::VectorXd y_0(1);
  y_0(0) = 1;
  double t_start{0};
  double t_end{5};
  double dt{0.01};
  std::unique_ptr<Base_ODE> trial =
      std::make_unique<RK4>(dt, t_start, t_end, y_0, 0);

  trial->solve();
  Eigen::MatrixXd sol = trial->get_sol();
  double tol{0.1};
  for (int i{0}; i < sol.cols(); i++) {
    ASSERT_GT(tol, std::abs(exp(-(t_start + i * dt)) - sol(0, i)));
  }
};

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
