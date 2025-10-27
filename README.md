🚗 Ride Sharing System (C++ OOP Project)
A console-based Ride Sharing System that simulates platforms like Ola or Uber, built entirely using Object-Oriented Programming (OOP) principles in C++. This project demonstrates various OOP concepts such as encapsulation, inheritance, polymorphism, abstraction, operator overloading, templates, and dynamic memory allocation.

Introduction
This project simulates a ride-sharing platform where users can:

Enter personal and trip details

Choose a vehicle (Bike, Auto, Car)

Get fare estimations

Get randomly assigned drivers

Rate each other after the ride

The system demonstrates real-world problem-solving using OOP concepts such as abstraction, inheritance, and polymorphism.

⚙️ Key OOP Concepts Implemented
Concept	Description
Encapsulation	Classes like Driver, User, and Ride encapsulate related data and functions.
Abstraction	Internal details like fare calculation and data storage are hidden behind user-friendly methods.
Inheritance	Driver and User classes inherit from an abstract Person base class.
Polymorphism	Virtual functions in the base classes allow dynamic behavior across derived classes.
Operator Overloading	<, >, and == operators are overloaded to compare driver ratings and fares.
Function Overloading	Used in rating and user input methods.
Template Functions	Generic template used to print vectors of any data type.
Composition	Classes like Ride contain objects of User and Driver.
Dynamic Memory Allocation	Rides are dynamically created and deleted using new and delete.
🚘 System Overview
The system includes:
Drivers (with vehicle info and rating)

Users (input details and choose rides)

Vehicles (bike, auto, car with fare rates)

RideService (handles assignment, fare display, and coordination)

Key Features
Fare calculation based on distance and vehicle type

Driver assignment from a predefined list

Ride restrictions based on passenger count and distance

Mutual rating system between user and driver

🧩 Class Design
VehicleType :Represents the type of vehicle and fare rate. Function: getFare()

Ride:Contains distance and selected vehicle type. Function: calculateFare()

Driver:Stores driver info, rating, and vehicle details. Functions: getDriverInfo(), getVehicleType()

User:Stores user info and ride preferences. Functions: inputDetails(), selectDriver()

RideService:Coordinates the entire process — assigns drivers, calculates fares, and manages rides. Functions: assignRandomDriver(), displayFare()

🔁 Code Workflow
1)User enters name, phone, pickup, drop, distance, and number of passengers.

2)System calculates the estimated fare for each vehicle type.

3)Displays the cheapest available vehicle.

4)Enforces ride restrictions (e.g., bike cannot carry >1 person or >25 km).

5)Displays user details.

6)Randomly assigns a driver from the text file.

7)Calculates and displays final fare.

8)Prompts both user and driver to rate each other.

💻 Input & Output
image
Output Example
image
▶️ How to Run
Clone this repository git clone https://github.com//ride-sharing-system.git

Navigate to the project folder cd ride-sharing-system

Compile the program g++ main.cpp -o rideshare

Run the executable ./rideshare

🚀 Future Improvements
Add GUI for user-friendly booking interface

Integrate file I/O for ride history and driver data persistence

Implement database connectivity (MySQL/SQLite)

Add surge pricing and real-time route optimization

📜 License
This project is for educational purposes under IIITDM Kancheepuram’s Object-Oriented Programming course. You may use or modify it for learning and academic use.
