#include "rk2.h"

RK2::RK2(const double dt, const double t_start, const double t_end,
         Eigen::VectorXd y_0, int f)
    : Base_ODE(dt, t_start, t_end, y_0, f) {}

void RK2::solve() {
  if (flag == 0) {
    for (auto i{1}; i < _n; i++) {
      Eigen::VectorXd k1(_y_0.rows());
      k1 = _dt *
           test(sol(Eigen::seq(0, Eigen::last), i - 1), _t_start + i * _dt);
      Eigen::VectorXd k2(_y_0.rows());
      k2 = _dt * test(sol(Eigen::seq(0, Eigen::last), i - 1) + k1 * 0.5,
                      _t_start + i * _dt);
      sol(Eigen::seq(0, Eigen::last), i) =
          sol(Eigen::seq(0, Eigen::last), i - 1) + (k1 + k2) * 0.5;
    }
  } else {
    for (auto i{1}; i < _n; i++) {
      Eigen::VectorXd k1(_y_0.rows());
      k1 =
          _dt * rhs(sol(Eigen::seq(0, Eigen::last), i - 1), _t_start + i * _dt);
      Eigen::VectorXd k2(_y_0.rows());
      k2 = _dt * rhs(sol(Eigen::seq(0, Eigen::last), i - 1) + k1 * 0.5,
                     _t_start + i * _dt);
      sol(Eigen::seq(0, Eigen::last), i) =
          sol(Eigen::seq(0, Eigen::last), i - 1) + (k1 + k2) * 0.5;
    }
  }
}
