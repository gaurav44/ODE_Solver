#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include "euler.cpp"
#include "test_function.cpp"

bool test_ode(){
    bool test = true;
    double dt=0.01; // specify the step size here
    double t_start=0; // initial t
    double t_end=5; // end of t
    double y_0=1;   // initial condition y(0) = y_0
    int n = ((t_end-t_start)/dt)+1;
    std::vector<double> t{};
    for(int i{0};i<n;i++){
        t.push_back(t_start+i*dt);
    }
    std::vector<double> y;
    y.push_back(y_0);
    exp_euler(y, n, t_start, t_end, dt);

    std::vector<double> y_ref;
    // y_ref.push_back(exp(-t_start));

    for(auto i{0};i<n;i++){
        y_ref.push_back(test_func1(t.at(i)));
        // y_ref.push_back(exp(-(t_start+(i-1)*dt)));
    }

    auto tol = 1e-6;

    for(auto i{0};i<n;i++){
        if(std::abs(y[i]-y_ref[i])<tol){
            continue;
        }else{
            test = false;
        }
    }

    if(test){
        std::cout<<"\nThe solver works fine."<<std::endl;
    }else{
        std::cout<<"The solver doesn't work. Check the solver......."<<std::endl;
        std::cout<<"--------------------------------------------------------------------------------------\n"<<std::endl;
        std::cout<<"t"<<"          "<<"y_calc"<<"           "<<"y_ref\n";
        for(auto i{0};i<n;i++){
            std::cout<<t.at(i)<<"          "<<y.at(i)<<"          "<<y_ref.at(i)<<std::endl;
        }
    }
    return test;
}