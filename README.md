# Sprint 2

## Overview
This repository consists of C++ code for solving system ODEs by 4 methods.<br />
Each method is implemented as a class derived from an abstract interface class in the file base_ode.cpp.<br />
The abstract class has a pure virtual function `void solve()` which is overridden by each of the derived classes.<br />
Eigen library was used to perform matrix operations.<br />
Unit Tests were written using the Google Test framework.<br />
Python script is provided for plotting solution written in file.<br />
googletest and eigen-3.4-rc1 libraries are already provided in the folder `lib`. The user needs to have Cmake and make installed to build /compile, and numpy and matplotlib to plot the solution.<br />
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
3) In `main.cpp` first, define the `Eigen::VectorXd` containing the initial values of y.
4) Since `Base_ODE` is the interface class, define a unique pointer of type `Base_ODE` pointing to an object of desired method class. Pass dt, t_start, t_end , y_0 to the constructor.

For eg: `std::unique_ptr<Base_ODE> trial = std::make_unique<RK2>(0.1, 0, 20, y_0);`

5) To solve the ODE by your chosen method, call the overridden solve() method as `trial->solve();`
6) To write the solution to file, call the write_sol() method as `trial->write_sol()`

## Additional note
There are 4 examples already included in `main.cpp`.  They are as follows:
1) Dahlquist
2) Population Model (Arms race with peaceful neighbour)
3) Damped Pendulum
4) Van der Poll Oscillator
The user can uncomment the respective example in `main.cpp` and `rhs_func.cpp` and build/compile 



