#ifndef PERSON_HPP
#define PERSON_HPP

#include<string>
#include<iostream>
using namespace std;
class Person {
protected:
    string name;

public:
    Person(const string& name) : name(name) {}
    virtual void displayInfo() const = 0; // Pure virtual function
    virtual ~Person() = default; // Virtual destructor
};

#endif
