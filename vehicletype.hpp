#ifndef VEHICLETYPE_HPP
#define VEHICLETYPE_HPP

#include<string> // Include this to use std::string

enum class VehicleType {
    Bike,
    Auto,
    Car
};

VehicleType stringToVehicleType(const std::string& type); // Declaration

#endif // VEHICLETYPE_HPP
