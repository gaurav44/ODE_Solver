#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <iomanip>

double test_func1(const double &t);
bool test_ode(double tol);
double f(double t, double y);
void exp_euler(std::vector<double> &y, const int &n, double t_start, double t_end, double dt );


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
    std::ofstream time;
    std::ofstream y_out;
    time.open("time");
    y_out.open("y_out");
    for(int i{0};i<n;i++){
        time<<t.at(i)<<std::endl;
        y_out<<y.at(i)<<std::endl;
    }
    time.close();
    y_out.close();
    test_ode(1e-2);
    return 0;
}

void exp_euler(std::vector<double> &y, const int &n, double t_start, double t_end, double dt ){
    for(auto i{1};i<n;i++){
       y.push_back(y[i-1]+dt*f(t_start+(i-1)*dt,y[i-1]));       
    }
}

bool test_ode(double tol){
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
        std::cout<<"The solver isn't within tolerance "<<tol<<" . Check the solver."<<std::endl;
        std::cout<<"--------------------------------------------------------------------------------------\n"<<std::endl;
        {std::cout<<std::setw(5)
             <<"t"
             <<std::setw(7)
             <<"|"
             <<std::setw(15)
             <<"y_calc"
             <<std::setw(7)
             <<"|"
             <<std::setw(15)
             <<"y_ref\n";}
        for(auto i{0};i<n;i++){
            std::cout<<std::setw(5)
             <<t.at(i)
             <<std::setw(7)
             <<"|"
             <<std::setw(15)
             <<y.at(i)
             <<std::setw(7)
             <<"|"
             <<std::setw(15)
             <<y_ref.at(i)
             <<std::endl;
        }
    }
    return test;
}

double test_func1(const double &t){
    return exp(-t);
}

double f(double t, double y){
    return -y;
}
