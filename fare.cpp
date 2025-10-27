#include"fare.hpp"
#include"vehicletype.hpp"

Fare::Fare(float amt) : amount(amt) {}

Fare Fare::operator+(const Fare& f) {
    return Fare(this->amount + f.amount);
}

std::ostream& operator<<(std::ostream& os, const Fare& fare) {
    os<<"$"<<fare.amount;
    return os;
}

float calculateFare(VehicleType type, float distance) {
    if (type==VehicleType::Bike) {
        return distance*0.144;
    } else if (type==VehicleType::Auto) {
        return distance*0.216;
    } else {
        return distance*0.3;
    }
}
