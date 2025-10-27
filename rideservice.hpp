#ifndef RIDESERVICE_HPP
#define RIDESERVICE_HPP

#include<vector>
#include"ride.hpp"
#include"driver.hpp"

class RideService {
private:
    std::vector<Ride*> rides;
    std::vector<Driver> drivers;

public:
    RideService();
    ~RideService();
    void addRide(Ride* ride);
    void addDriver(const Driver& driver);
    std::vector<Driver> getDriversByVehicleType(VehicleType type) const;
};

#endif
