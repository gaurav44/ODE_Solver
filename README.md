# group_BW_ode_solver

The code solves y'(t) = f(y,t) where f(y,t) = -y for sprint1

The procedure for using the code is as follows:

1. The user should input f(y,t) in the function 'f' For eg.
`double f(double t, double y){
    return -y;
}`. 
2. Define dt, t_start, t_end, and initial value y_0 For eg. `double dt=0.01;double t_start=0;double t_end=5;double y_0=1; `
3. There is a unit test which requires tolerance value from the user in variable tol For eg. `double tol=0.1 ` to compare with analytical solution. If at any t the difference between calculated y(t) and analytical solution is greater than tolerance, the test will fail and print the calculated and analytical solutions to the console. If all calculated values are within tolerance then the it will print "solver works fine"
4. compile and run main.cpp
   The code outputs values of t and y separated by '|' in the terminal 
5. In terminal run python3 plot.py to plot the results



Bonus Project for the Advanced Programming Course
