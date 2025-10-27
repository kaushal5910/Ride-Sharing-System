#ifndef USER_HPP
#define USER_HPP

#include"person.hpp"
#include"driver.hpp"
#include<vector>

class User : public Person {
private:
    std::string phoneNumber;

public:
    User(const std::string& name, const std::string& phone);
    void displayInfo() const override;
    void rateUser(int rating) const;
    void rateDriver(Driver& driver, int rating) const;
};

#endif
