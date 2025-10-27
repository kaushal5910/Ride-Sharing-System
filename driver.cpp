#include"driver.hpp"
#include<iostream>
using namespace std;

Driver::Driver(const string& name, VehicleType type, const string& vehicleName, float rating)
    : Person(name), vehicleType(type), vehicleName(vehicleName), rating(rating) {}

void Driver::displayInfo() const {
    cout<<"Driver: "<<name<<", Vehicle: "<<vehicleName<<", Rating: "<<rating<<endl;
}

float Driver::calculateFare(float distance) const {
    float farePerKm=0;
    if (vehicleType==VehicleType::Bike) {
        farePerKm=12.0;
    } else if (vehicleType==VehicleType::Auto) {
        farePerKm=18.0;
    } else {
        farePerKm=25.0;
    }
    return farePerKm*distance*0.012; // Conversion rate
}

VehicleType Driver::getVehicleType() const {
    return vehicleType;
}

float Driver::getRating() const {
    return rating;
}

void Driver::setRating(float newRating) {
    rating=newRating;
}

bool Driver::operator<(const Driver& other) const {
    return rating<other.rating;
}

bool Driver::operator>(const Driver& other) const {
    return rating>other.rating;
}

bool Driver::operator==(const Driver& other) const {
    return rating==other.rating;
}
