## 🚗 Ride Sharing System — C++ OOP Project

A console-based Ride Sharing Platform inspired by Ola/Uber, developed entirely using Object-Oriented Programming (OOP) principles in C++. This project showcases real-world ride booking, driver assignment, fare estimation, and a mutual rating system.

## 🎯 Project Overview

This system allows users to:

Enter personal and trip details

Choose vehicle type: Bike, Auto, or Car

Get instant fare estimations

Get randomly assigned drivers

Rate the driver and receive a rating back

## 🧠 OOP Concepts Implemented

**Encapsulation**: Driver, User, Vehicle, Ride classes manage their own data

**Abstraction**: Complex fare logic hidden behind simple methods

**Inheritance**: Driver and User extend an abstract Person class

**Polymorphism**: Vehicle behavior handled using virtual functions

**Operator Overloading**: Compare driver ratings and fares using <, >, ==

**Function Overloading**: Multiple input and rating functions

**Templates**: Generic method to print vectors of any type

**Composition**: Ride contains Driver and User objects

**Dynamic Memory Allocation**: new and delete used for creating rides

## 🏗 System Architecture

Includes the following major classes:

Person (Abstract Base Class)

User

Driver

Vehicle (Bike, Auto, Car)

Ride (handles distance & fare)

RideService (controls overall trip process)

## 🌟 Key Features

Fare calculated using distance + vehicle type

Suggests cheapest ride option

Restrictions: passenger count / distance based on vehicle

Random driver assignment from stored list

Clean OOP modular design

Mutual rating system

## 🔁 Booking Flow

1️⃣ User enters trip details
2️⃣ System calculates estimated fare
3️⃣ Best ride option is suggested
4️⃣ Driver gets assigned
5️⃣ Final fare displayed
6️⃣ User and driver rate each other

