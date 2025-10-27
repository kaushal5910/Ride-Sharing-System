🚗 Ride Sharing System — C++ OOP Project

A console-based Ride Sharing Platform inspired by services like Ola and Uber, fully developed using Object-Oriented Programming (OOP) principles in C++.
This project simulates real-world ride booking, driver assignment, and fare estimation — demonstrating strong concepts like encapsulation, inheritance, polymorphism, abstraction, composition, and more.

🎯 Project Overview

This system enables users to:

✅ Enter personal and trip details
✅ Choose a preferred vehicle type (Bike / Auto / Car)
✅ View fare estimations instantly
✅ Get a randomly assigned driver
✅ Rate driver after completion — and get rated back ✅

The design follows a clean OOP architecture that mirrors real-world ride-sharing logic.

🧠 OOP Concepts Implemented
Concept	What This Project Demonstrates
Encapsulation	User, Driver, Vehicle, and Ride handle their own logic/data
Abstraction	Fare calculations & internal logic hidden from main flow
Inheritance	Driver & User extend the abstract Person base class
Polymorphism	Virtual methods allow dynamic vehicle behavior
Operator Overloading	<, >, == used to compare driver rating and fares
Function Overloading	Multiple rating/input methods
Templates	Generic function prints lists of objects
Composition	Ride contains User and Driver objects
Dynamic Memory Allocation	Rides created & destroyed using new and delete
🏗 System Architecture

Person (Abstract)

→ User

→ Driver (with vehicle + rating)

Vehicle (Bike, Auto, Car — different fare models)

Ride (distance, calculated fare, assigned driver)

RideService (core controller: booking → assignment → billing)

🌟 Key Features

✨ Real-time fare estimation
🚫 Ride validation (limit passenger count / distance based on vehicle)
🎯 Best & cheapest ride suggestion
👥 Mutual driver-user rating system
📌 Driver details generated from dataset

🔁 Booking Workflow

1️⃣ User enters trip and passenger details
2️⃣ System estimates fare for all vehicle types
3️⃣ Suggests optimal ride based on cost and rules
4️⃣ Displays assigned driver info
5️⃣ calculates final fare 💰
6️⃣ Ratings exchanged after ride ⭐
