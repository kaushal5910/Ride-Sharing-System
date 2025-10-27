#include"ride.hpp"
#include<iostream>
using namespace std;

Ride::Ride(const User& user, const Driver& driver, float fareAmount, const std::string& pickup, const std::string& drop)
    : user(user), driver(driver), fare(fareAmount) {
    pickupLocation = pickup;
    dropLocation = drop;
}

void Ride::rideDetails() const {
    user.displayInfo();
    driver.displayInfo();
    cout << "Pickup Location: " << pickupLocation << ", Drop Location: " << dropLocation << endl;
    cout << "Fare: " << fare << endl;
}
