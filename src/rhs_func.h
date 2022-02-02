#ifndef RHS_FUNC_H
#define RHS_FUNC

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

#include "../lib/eigen-3.4-rc1/Eigen/Core"
#include "../lib/eigen-3.4-rc1/Eigen/Dense"

Eigen::VectorXd rhs(const Eigen::VectorXd &y, double t);
Eigen::MatrixXd drhs(const Eigen::VectorXd &y, double t);
Eigen::VectorXd test(const Eigen::VectorXd &y, double t);
Eigen::MatrixXd dtest(const Eigen::VectorXd &y, double t);

#endif
