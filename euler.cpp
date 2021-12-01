#ifndef EULER_H
#define EULER_H
#include <iostream>
#include <cmath>
#include <vector>
#include "user_function.cpp"

void exp_euler(std::vector<double> &y, const int &n, double t_start, double t_end, double dt ){
    for(auto i{1};i<n;i++){
       y.push_back(y[i-1]+dt*f(t_start+(i-1)*dt,y[i-1]));       
    }
}

#endif