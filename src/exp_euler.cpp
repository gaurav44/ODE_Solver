#include "exp_euler.h"

exp_euler::exp_euler(const double dt, const double t_start, const double t_end,
                     Eigen::VectorXd y_0, int f)
    : Base_ODE(dt, t_start, t_end, y_0, f) {}

void exp_euler::solve() {
  if (flag == 0) {
    for (auto i{1}; i < _n; i++) {
      sol(Eigen::seq(0, Eigen::last), i) =
          sol(Eigen::seq(0, Eigen::last), i - 1) +
          _dt * test(sol(Eigen::seq(0, Eigen::last), i - 1),
                     _t_start + (i - 1) * _dt);
    }
  } else {
    for (auto i{1}; i < _n; i++) {
      sol(Eigen::seq(0, Eigen::last), i) =
          sol(Eigen::seq(0, Eigen::last), i - 1) +
          _dt * rhs(sol(Eigen::seq(0, Eigen::last), i - 1),
                    _t_start + (i - 1) * _dt);
    }
  }
}
