#ifndef RIDE_HPP
#define RIDE_HPP

#include"ridebase.hpp"
#include"user.hpp"
#include"driver.hpp"
#include"fare.hpp"

class Ride : public RideBase {
private:
    User user;
    Driver driver;
    Fare fare;

public:
    Ride(const User& user, const Driver& driver, float fareAmount, const std::string& pickup, const std::string& drop);
    void rideDetails() const override;
};

#endif
