#include "rhs_func.h"

// Dahlquist Equation
Eigen::VectorXd rhs(const Eigen::VectorXd &y, double t) { return -y; };

// Dahlquist Derivative
Eigen::MatrixXd drhs(const Eigen::VectorXd &y, double t) {
  Eigen::MatrixXd m(y.rows(), y.rows());
  m(0, 0) = -1;

  return m;
}

/*-----------------------------------------------------------------------------------------------------*/

// Population Model
// Eigen::VectorXd rhs(const Eigen::VectorXd &y, const double t) {
//   // implement user function rhs here f(t,y)
//   Eigen::VectorXd temp(y.rows());
//   temp(0) = 0 - 0.75 * y(0) + y(1);
//   temp(1) = 2.5 - y(0) - 0.75 * y(1);

//   return temp;
// }

/*-----------------------------------------------------------------------------------------------------*/

//// Double Damped Pendulum
// Eigen::VectorXd rhs(const Eigen::VectorXd &y, const double t) {
//   // std::cout<<y;
//   double b{0.5};
//   double g{9.81};
//   double L{1.0};
//   double m{2.0};
//   Eigen::VectorXd temp(y.rows());
//   temp(0) = y(1);
//   temp(1) = (-b / m) * y(1) - (g / L) * sin(y(0));
//   // std::cout<<temp;
//   return temp;
// }

/*-----------------------------------------------------------------------------------------------------*/

// Van-der Pol Oscillator
// Eigen::VectorXd rhs(const Eigen::VectorXd &y, double t) {
//   // implement user function rhs here f(t,y)
//   Eigen::VectorXd temp(y.rows());
//   // std::cout<<y(0)<<" "<<y(1);
//   temp(0) = y(1);
//   // std::cout<<temp(0)

//   temp(1) = 4 * (1 - y(0) * y(0)) * y(1) - y(0);

//   return temp;
// }

// // Van-der Pol Oscillator Derivative
// Eigen::MatrixXd drhs(const Eigen::VectorXd &y, double t) {
//   long int n{y.rows()};
//   Eigen::MatrixXd m(n, n);
//   m(0, 0) = 0;
//   m(0, 1) = 1;
//   m(1, 0) = -8 * y(0) * y(1) - 1;
//   m(1, 1) = 4 * (1 - y(0) * y(0));
//   return m;
// }

/*-----------------------------------------------------------------------------------------------------*/

Eigen::VectorXd test(const Eigen::VectorXd &y, const double t) { return -y; }

Eigen::MatrixXd dtest(const Eigen::VectorXd &y, double t) {
  Eigen::MatrixXd m(y.rows(), y.rows());
  m(0, 0) = -1;

  return m;
}

/*-----------------------------------------------------------------------------------------------------*/