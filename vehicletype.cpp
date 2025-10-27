#include"vehicletype.hpp"
#include<string>

VehicleType stringToVehicleType(const std::string& type) {
    if (type == "Bike") return VehicleType::Bike;
    if (type == "Auto") return VehicleType::Auto;
    return VehicleType::Car;
}
