#include <unistd.h>

#include <chrono>
#include <cmath>
#include <filesystem>
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
  double dt;
  double t_start;
  double t_end;
  double num_rows;
  Eigen::VectorXd y_0;
  int choice;

  std::ifstream ipfile("../input.txt");
  if (ipfile.is_open()) {
    ipfile >> dt >> t_start >> t_end >> num_rows;
    y_0.resize(num_rows);
    for (auto i{0}; i < num_rows; i++) {
      double num;
      ipfile >> num;
      y_0(i) = num;
    }
    ipfile >> choice;
  } else {
    std::cout << "Unable to open file\n";
  }
  std::chrono::time_point<std::chrono::system_clock> start;
  std::chrono::time_point<std::chrono::system_clock> end;
  if (choice == 1) {
    std::cout << "Solving using Explicit Euler.....\n";
    std::unique_ptr<Base_ODE> trial =
        std::make_unique<exp_euler>(dt, t_start, t_end, y_0);
    start = std::chrono::system_clock::now();
    trial->solve();
    end = std::chrono::system_clock::now();
    trial->write_sol();

    auto elapsed_time =
        std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Elapsed time:" << elapsed_time.count() << "us" << std::endl;

  } else if (choice == 2) {
    std::cout << "Solving using Runge Kutta 2nd Order.....\n";
    std::unique_ptr<Base_ODE> trial =
        std::make_unique<RK2>(dt, t_start, t_end, y_0);
    start = std::chrono::system_clock::now();
    trial->solve();
    end = std::chrono::system_clock::now();
    trial->write_sol();

    auto elapsed_time =
        std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Elapsed time:" << elapsed_time.count() << "us" << std::endl;

  } else if (choice == 3) {
    std::cout << "Solving using Runge Kutta 4th Order.....\n";
    std::unique_ptr<Base_ODE> trial =
        std::make_unique<RK4>(dt, t_start, t_end, y_0);
    start = std::chrono::system_clock::now();
    trial->solve();
    end = std::chrono::system_clock::now();
    trial->write_sol();

    auto elapsed_time =
        std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Elapsed time:" << elapsed_time.count() << "us" << std::endl;

  } else if (choice == 4) {
    std::cout << "Solving using Implicit Euler.....\n";
    std::unique_ptr<Base_ODE> trial =
        std::make_unique<imp_euler>(dt, t_start, t_end, y_0);
    start = std::chrono::system_clock::now();
    trial->solve();
    end = std::chrono::system_clock::now();
    trial->write_sol();

    auto elapsed_time =
        std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Elapsed time:" << elapsed_time.count() << "us" << std::endl;
  }

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
  // Eigen::VectorXd y_0(2);
  // y_0(0) = 1;
  // y_0(1) = -1;
  // std::unique_ptr<Base_ODE> trial = std::make_unique<RK4>(0.1, 0, 20, y_0);

  // trial->solve();
  // trial->write_sol();

  // Van der Poll Oscillator
  // Eigen::VectorXd y_0(2);
  // y_0(0) = 1;
  // y_0(1) = 1;
  // std::unique_ptr<Base_ODE> trial =
  //     std::make_unique<imp_euler>(0.1, 0, 20, y_0);

  // trial->solve();
  // trial->write_sol();
}