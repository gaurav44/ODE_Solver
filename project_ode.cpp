#include <iostream>
#include <cmath>
#include <vector>

//Code for solving the ODE y'(t) = f(t,y)


// Define the function f(t,y) below. This forms the rhs of the ODE
double f(double t, double y){
    return -y;
}

void exp_euler(std::vector<double> &y, const int &n, double t_start, double t_end, double dt ){

    for(int i=1;i<n;i++){

       y.push_back(y[i-1]+dt*f(t_start+(i-1)*dt,y[i-1]));
        

    }
}

int main(){
    double dt=0.01; // specify the step size here
    double t_start=0; // initial t
    double t_end=5; // end of t
    double y_0=1;   // initial condition y(0) = y_0
    int n = ((t_end-t_start)/dt)+1; // n stores the number of time steps or number of data points

    std::vector<double> y;
    y.push_back(y_0);
    exp_euler(y, n, t_start, t_end, dt); // pass your parameters to the function

    std::cout<<"The value of n is "<<n<<"\n"<<"\n";
    std::cout<<"The solution vector obtained from explicit Euler is  "<<"\n"<<"\n";

    for(int i=0;i<n;i++){
        std::cout<<"y at t = "<<t_start+i*dt<<" is "<<y[i]<<"\n";
    }


}