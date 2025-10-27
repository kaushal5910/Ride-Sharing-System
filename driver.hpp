#ifndef DRIVER_HPP
#define DRIVER_HPP

#include<string>
#include"vehicletype.hpp"
#include"person.hpp"
using namespace std;
class Driver : public Person {
private:
    VehicleType vehicleType;
    string vehicleName;
    float rating;

public:
    Driver(const string& name, VehicleType type, const string& vehicleName, float rating);
    void displayInfo() const override;
    float calculateFare(float distance) const;
    VehicleType getVehicleType() const;
    float getRating() const;
    void setRating(float newRating);
    bool operator<(const Driver& other) const;
    bool operator>(const Driver& other) const;
    bool operator==(const Driver& other) const;
};

#endif
