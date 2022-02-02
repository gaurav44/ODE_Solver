#include "base_ode.h"

Base_ODE::Base_ODE(const double dt, const double t_start, const double t_end,
                   Eigen::VectorXd y_0, int f)
    : _dt{dt},
      _t_start{t_start},
      _t_end{t_end},
      _y_0{y_0},
      _n{static_cast<int>((_t_end - _t_start) / _dt + 1)},
      _m{static_cast<int>(y_0.rows())},
      flag{f} {
  sol.resize(_m, _n);
  sol(Eigen::seq(0, Eigen::last), 0) =
      _y_0;  // copy the initial value y_0 into the first column
}

void Base_ODE::write_sol() const {
  std::vector<double> t{};
  for (int i{0}; i < _n; i++) {
    t.push_back(_t_start + i * _dt);
  }

  std::ofstream time;
  std::ofstream y_out;

  time.open("../../time");
  y_out.open("../../y_out");

  for (int i{0}; i < _n; i++) {
    time << t.at(i) << std::endl;
    for (int j{0}; j < sol.rows(); j++) {
      y_out << sol(j, i) << ",";
    }
    y_out << "\n";
  }

  time.close();
  y_out.close();
}

Eigen::MatrixXd Base_ODE::get_sol() { return sol; }