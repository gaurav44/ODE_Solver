# Sprint 3

## Overview
This repository consists of C++ code for solving system ODEs by 4 methods.<br />
Each method is implemented as a class derived from an abstract interface class in the file base_ode.cpp.<br />
The abstract class has a pure virtual function `void solve()` which is overridden by each of the derived classes.<br />
Eigen library was used to perform matrix operations.<br />
Unit Tests were written using the Google Test framework.<br />
Python script is provided for plotting solution written in file.<br />
The user needs to download [googletest](https://github.com/google/googletest) and [eigen-3.4-rc1](https://gitlab.com/libeigen/eigen/-/releases/3.4-rc1) libraries and place them in the folder `lib`. The user should have `Cmake` and `make` installed to build /compile, and numpy and matplotlib to plot the solution.<br />
For unit tests, the solution obtained by each of the methods for Dahlquist's equation was compared with its analytical solution. If the numerical solution is within a tolereance value(which is specified in the test) then the test returns `PASSED`

## Steps to build/compile project
1) Download all the files from the branch sprint 2.
2) Go to the folder `build` and run  `cmake ..`
3) Run `make`
4) After running make, the main executable will be in `build/src` with the name `ODE_solver_run`. Hence `cd` into `build/src` and run `./ODE_solver_run` 
5) After running `ODE_solver_run` the files containing solution data `y_out` and `time` will be written in the main project directorty(where the the python scripts are also present). 
6) To run the tests, `cd` into `build/test` and run the executable `ODE_solver_tst`

## Using the solver
1) The solver numerically solves the ODE `y' = f(y, t)`. f(y, t) is referred as rhs and its Jacobian as drhs(required only for Implicit Euler)
2) The user needs to define the rhs in `rhs_func.cpp` with the function signature as `Eigen::VectorXd rhs(const Eigen::VectorXd &y, const double t)`.
In case the user wants to use Implicit Euler method, the drhs function needs to be defined with function signature as `Eigen::MatrixXd drhs(const Eigen::VectorXd &y, double t)`
3) In the `input.txt` provided in the build folder, put the values of dt, t_start, t_end, length of vector of initial values, initial values and method choice seperated by a whitespace in that specific order. <br />
Choice 1 for Explicit Euler<br />
Choice 2 for RK2<br />
Choice 3 for RK4<br />
Choice 4 for Implicit Euler<br />

## Additional note
There are 4 examples already included in `main.cpp`.  They are as follows:
1) Dahlquist
2) Population Model (Arms race with peaceful neighbour)
3) Damped Pendulum
4) Van der Poll Oscillator
The user can uncomment the respective example in `main.cpp` and `rhs_func.cpp` and build/compile 



