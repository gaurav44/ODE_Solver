#include <iostream>
#include <cmath>
#include <vector>


//Code for solving the ODE y'(t) = f(t,y)


// Define the function f(t,y) below. This forms the rhs of the ODE
double f(double t, double y){
    return -y;
}

void exp_euler(std::vector<double> &y, const int &n, double t_start, double t_end, double dt ){

    for(auto i{1};i<n;i++){
       y.push_back(y[i-1]+dt*f(t_start+(i-1)*dt,y[i-1]));       
    }
}

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
    y_ref.push_back(exp(-t_start));

    for(auto i{1};i<n;i++){
        y_ref.push_back(exp(-(t_start+(i-1)*dt)));
    }

    auto tol = 1e-6;

    for(auto i{0};i<n;i++){
        if(abs(y[i]-y_ref[i])<tol){
            continue;
        }else{
            test = false;
        }
    }

    if(test){
        std::cout<<"The solver works fine."<<std::endl;
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

    std::cout<<"t"<<"          "<<"y"<<"          \n";
    for(int i=0;i<n;i++){
        std::cout<<t.at(i)<<"          "<<y.at(i)<<"\n";
    }
    test_ode();
    
}