#include "rk4.h"

RK4::RK4(const double dt, const double t_start, const double t_end,
         Eigen::VectorXd y_0, int f)
    : Base_ODE(dt, t_start, t_end, y_0, f) {}

void RK4::solve() {
  if (flag == 0) {
    for (auto i{1}; i < _n; i++) {
      Eigen::VectorXd k1(_y_0.rows());
      k1 = _dt *
           test(sol(Eigen::seq(0, Eigen::last), i - 1), _t_start + i * _dt);

      Eigen::VectorXd k2(_y_0.rows());
      k2 = _dt * test(sol(Eigen::seq(0, Eigen::last), i - 1) + k1 / 2,
                      _t_start + i * _dt / 2);

      Eigen::VectorXd k3(_y_0.rows());
      k3 = _dt * test(sol(Eigen::seq(0, Eigen::last), i - 1) + k2 / 2,
                      _t_start + i * _dt / 2);

      Eigen::VectorXd k4(_y_0.rows());
      k4 = _dt * test(sol(Eigen::seq(0, Eigen::last), i - 1) + k3,
                      _t_start + i * _dt);

      sol(Eigen::seq(0, Eigen::last), i) =
          sol(Eigen::seq(0, Eigen::last), i - 1) +
          (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    }
  } else {
    for (auto i{1}; i < _n; i++) {
      Eigen::VectorXd k1(_y_0.rows());
      k1 =
          _dt * rhs(sol(Eigen::seq(0, Eigen::last), i - 1), _t_start + i * _dt);

      Eigen::VectorXd k2(_y_0.rows());
      k2 = _dt * rhs(sol(Eigen::seq(0, Eigen::last), i - 1) + k1 / 2,
                     _t_start + i * _dt / 2);

      Eigen::VectorXd k3(_y_0.rows());
      k3 = _dt * rhs(sol(Eigen::seq(0, Eigen::last), i - 1) + k2 / 2,
                     _t_start + i * _dt / 2);

      Eigen::VectorXd k4(_y_0.rows());
      k4 = _dt *
           rhs(sol(Eigen::seq(0, Eigen::last), i - 1) + k3, _t_start + i * _dt);

      sol(Eigen::seq(0, Eigen::last), i) =
          sol(Eigen::seq(0, Eigen::last), i - 1) +
          (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    }
  }
}
