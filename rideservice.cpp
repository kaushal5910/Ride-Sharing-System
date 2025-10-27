#include"rideservice.hpp"
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

RideService::RideService() {
    ifstream file("drivers.txt");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, vehicleTypeStr, vehicleName;
        float rating;
        getline(ss, name, ',');
        getline(ss, vehicleTypeStr, ',');
        getline(ss, vehicleName, ',');
        ss >> rating;

        VehicleType type = stringToVehicleType(vehicleTypeStr);
        addDriver(Driver(name, type, vehicleName, rating));
    }
}

RideService::~RideService() {
    for (auto ride : rides) {
        delete ride;
    }
}

void RideService::addRide(Ride* ride) {
    rides.push_back(ride);
}

void RideService::addDriver(const Driver& driver) {
    drivers.push_back(driver);
}

vector<Driver> RideService::getDriversByVehicleType(VehicleType type) const {
    vector<Driver> filteredDrivers;
    for (const auto& driver : drivers) {
        if (driver.getVehicleType() == type) {
            filteredDrivers.push_back(driver);
        }
    }
    return filteredDrivers;
}
