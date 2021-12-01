#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include "euler.cpp"
#include "test.cpp"

//Code for solving the ODE y'(t) = f(t,y)

int main(){
    double dt=0.01; // specify the step size here
    double t_start=0; // initial t
    double t_end=5; // end of t
    double y_0=1;   // initial condition y(0) = y_0
    int n = ((t_end-t_start)/dt)+1; // n stores the number of time steps or number of data points
    std::vector<double> t{};
    for(int i{0};i<n;i++){
        t.push_back(t_start+i*dt);
    }
    std::vector<double> y;
    y.push_back(y_0);
    exp_euler(y, n, t_start, t_end, dt); // pass your parameters to the function

    std::cout<<"The value of n is "<<n<<"\n"<<"\n";
    std::cout<<"The solution vector obtained from explicit Euler is............."<<"\n"<<"\n";
    std::cout<<"--------------------------------------------------------------------------\n";

    {std::cout<<std::setw(5)
             <<"t"
             <<std::setw(7)
             <<"|"
             <<std::setw(15)
             <<"y\n";}

    for(int i=0;i<n;i++){
        std::cout<<std::setw(5)
                 <<t.at(i)
                 <<std::setw(7)
                 <<"|"
                 <<std::setw(15)
                 <<y.at(i)<<"\n";
    }
    
    test_ode();
    
}