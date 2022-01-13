#ifndef BASE_ODE_H
#define BASE_ODE_H
#include <fstream>
#include <iostream>
#include <vector>

#include "../lib/eigen-3.4-rc1/Eigen/Core"
#include "../lib/eigen-3.4-rc1/Eigen/Dense"

class Base_ODE {
  // friend Eigen::VectorXd rhs(const Eigen::VectorXd &y, double t);

protected:
  const double _dt;
  const double _t_start;
  const double _t_end;
  const Eigen::VectorXd _y_0;
  const int _n;
  const long int _m;
  Eigen::MatrixXd sol;
  int flag; // 0 for test, 1 for normal

public:
  Base_ODE(const double, const double, const double, Eigen::VectorXd,
           int f = 1);
  // Eigen::VectorXd rhs(const Eigen::VectorXd &y, const double t = 0) const;
  // Eigen::MatrixXd drhs(const Eigen::VectorXd &y, const double t = 0) const;
  void write_sol() const;
  virtual void solve() = 0;
  Eigen::MatrixXd get_sol();
  ~Base_ODE() = default;
};
#endif