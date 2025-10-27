#include"user.hpp"
#include<iostream>
using namespace std;

User::User(const std::string& name, const std::string& phone) : Person(name), phoneNumber(phone) {}

void User::displayInfo() const {
    cout << "User: " << name << ", Phone: " << phoneNumber << endl;
}

void User::rateUser(int rating) const {
    cout << "User Rating: " << rating << endl;
}

void User::rateDriver(Driver& driver, int rating) const {
    driver.setRating(rating);
    cout << "Driver Rated: " << rating << endl;
}
