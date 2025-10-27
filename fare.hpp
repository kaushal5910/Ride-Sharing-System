#ifndef FARE_HPP
#define FARE_HPP

#include<iostream>
#include"vehicletype.hpp"
using namespace std;

class Fare{
private:
    float amount;

public:
    Fare(float amt);
    Fare operator+(const Fare& f);
    friend ostream& operator<<(ostream& os,const Fare& fare);
};

float calculateFare(VehicleType type,float distance);

#endif
