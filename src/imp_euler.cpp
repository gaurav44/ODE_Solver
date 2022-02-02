#include "imp_euler.h"

imp_euler::imp_euler(const double dt, const double t_start, const double t_end,
                     Eigen::VectorXd y_0, int f)
    : Base_ODE(dt, t_start, t_end, y_0, f) {}

void imp_euler::solve() {
  for (int i{1}; i < _n; i++) {
    double tol = 10;
    Eigen::VectorXd temp(_m);
    temp = sol(Eigen::seq(0, Eigen::last), i - 1);
    int count{0};
    Eigen::VectorXd dy(_m);

    while (tol > 10 ^ -4 && (dG(temp, _t_start + i * _dt)).determinant() != 0 &&
           count < 100) {  // implementation of newton for finding roots
      dy = -((dG(temp, _t_start + i * _dt))
                 .inverse()) *  // tolerance of 10^-4, max iterations->100
           G(temp, sol(Eigen::seq(0, Eigen::last), i - 1), _t_start + i * _dt);
      temp = temp + dy;
      count++;
      tol = dy.norm();
    }

    sol(Eigen::seq(0, Eigen::last), i) = temp;
  }
}

Eigen::MatrixXd imp_euler::dG(const Eigen::VectorXd &v, double t) {
  if (flag == 0) {
    Eigen::MatrixXd I(_m, _m);
    I.setIdentity(_m, _m);
    return I - _dt * dtest(v, t);
  } else {
    Eigen::MatrixXd I(_m, _m);
    I.setIdentity(_m, _m);
    return I - _dt * drhs(v, t);
  }
}

Eigen::VectorXd imp_euler::G(const Eigen::VectorXd &y_curr,
                             const Eigen::VectorXd &y_prev, double t) {
  if (flag == 0) {
    return y_curr - y_prev - _dt * test(y_curr, t);
  } else {
    return y_curr - y_prev - _dt * rhs(y_curr, t);
  }
}