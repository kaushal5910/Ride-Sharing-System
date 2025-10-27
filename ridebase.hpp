#ifndef RIDEBASE_HPP
#define RIDEBASE_HPP

#include<string>

class RideBase {
protected:
    std::string pickupLocation;
    std::string dropLocation;

public:
    virtual void rideDetails() const = 0; // Pure virtual function
    virtual ~RideBase() = default;       // Virtual destructor
};

#endif
