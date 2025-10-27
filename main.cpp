#include"ride.hpp"
#include"rideservice.hpp"
#include"vehicletype.hpp"
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<sstream>

using namespace std;

// Utility to validate and parse float input
bool isValidNumber(const string& input, float& value) {
    stringstream ss(input);
    ss >> value;
    return !ss.fail() && ss.eof();
}

// Utility to validate and parse integer input
bool isValidInteger(const string& input, int& value) {
    stringstream ss(input);
    ss >> value;
    return !ss.fail() && ss.eof();
}

int main() {
    srand(time(0)); // Seed for random number generator

    // User input details
    string userName, userPhone, pickupLocation, dropLocation;
    float distance;
    int numPeople;

    // User details
    cout << "Enter User Name: ";
    getline(cin, userName);
    cout << "Enter User Phone Number: ";
    getline(cin, userPhone);
    User user(userName, userPhone);

    // Ride details
    cout << "Enter Pickup Location: ";
    getline(cin, pickupLocation);
    cout << "Enter Drop Location: ";
    getline(cin, dropLocation);

    // Get valid distance
    string distanceInput;
    while (true) {
        cout << "Enter Distance (in km): ";
        getline(cin, distanceInput);
        if (isValidNumber(distanceInput, distance) && distance > 0) {
            break;
        } else {
            cout << "Invalid distance. Please enter a positive number.\n";
        }
    }

    // Display estimated fares
    cout << "\nEstimated Fare for each Vehicle Type:\n";
    float bikeFare = calculateFare(VehicleType::Bike, distance);
    float autoFare = calculateFare(VehicleType::Auto, distance);
    float carFare = calculateFare(VehicleType::Car, distance);

    cout << "1. Bike: $" << bikeFare << endl;
    cout << "2. Auto: $" << autoFare << endl;
    cout << "3. Car: $" << carFare << endl;

    // Fare comparisons
    if (bikeFare < autoFare) {
        cout << "Bike is cheaper than Auto.\n";
    } else if (bikeFare > autoFare) {
        cout << "Auto is cheaper than Bike.\n";
    } else {
        cout << "Bike and Auto fares are the same.\n";
    }

    if (autoFare < carFare) {
        cout << "Auto is cheaper than Car.\n";
    } else if (autoFare > carFare) {
        cout << "Car is cheaper than Auto.\n";
    } else {
        cout << "Auto and Car fares are the same.\n";
    }

    // Get valid number of people
    string numPeopleInput;
    while (true) {
        cout << "Enter Number of People: ";
        getline(cin, numPeopleInput);
        if (isValidInteger(numPeopleInput, numPeople) && numPeople > 0) {
            break;
        } else {
            cout << "Invalid number of people. Please enter a positive integer.\n";
        }
    }

    // Vehicle selection
    VehicleType selectedVehicle;
    bool validVehicleChosen = false;
    while (!validVehicleChosen) {
        int vehicleChoice;
        cout << "Select Vehicle Type:\n";
        if (numPeople <= 1 && distance <= 25) {
            cout << "1. Bike\n";
        }
        if (numPeople <= 3 && distance <= 40) {
            cout << "2. Auto\n";
        }
        cout << "3. Car\n";
        cout << "Enter your choice (1, 2, 3): ";

        string vehicleChoiceInput;
        getline(cin, vehicleChoiceInput);
        if (isValidInteger(vehicleChoiceInput, vehicleChoice) && vehicleChoice >= 1 && vehicleChoice <= 3) {
            switch (vehicleChoice) {
                case 1:
                    if (numPeople > 1 || distance > 25) {
                        cout << "Invalid choice. Bike cannot be selected for more than 1 person or distances over 25 km.\n";
                    } else {
                        selectedVehicle = VehicleType::Bike;
                        validVehicleChosen = true;
                    }
                    break;
                case 2:
                    if (numPeople > 3 || distance > 40) {
                        cout << "Invalid choice. Auto cannot be selected for more than 3 people or distances over 40 km.\n";
                    } else {
                        selectedVehicle = VehicleType::Auto;
                        validVehicleChosen = true;
                    }
                    break;
                case 3:
                    selectedVehicle = VehicleType::Car;
                    validVehicleChosen = true;
                    break;
                default:
                    cout << "Invalid choice. Please enter a valid number (1, 2, or 3).\n";
            }
        } else {
            cout << "Invalid input. Please enter a valid number (1, 2, or 3).\n";
        }
    }

    // Ride Service
    RideService service;
    vector<Driver> availableDrivers = service.getDriversByVehicleType(selectedVehicle);

    if (availableDrivers.empty()) {
        cout << "No drivers available for the selected vehicle type.\n";
        return 1;
    }

    // Randomly select a driver
    int randomDriverIndex = rand() % availableDrivers.size();
    Driver selectedDriver = availableDrivers[randomDriverIndex];
    float fareAmount = selectedDriver.calculateFare(distance);

    // Create and display ride details
    Ride ride(user, selectedDriver, fareAmount, pickupLocation, dropLocation);
    ride.rideDetails();

    // User rating
    string userRatingInput;
    int userRating;
    while (true) {
        cout << "Please rate the user (1-5): ";
        getline(cin, userRatingInput);
        if (isValidInteger(userRatingInput, userRating) && userRating >= 1 && userRating <= 5) {
            break;
        } else {
            cout << "Invalid rating. Please enter a number between 1 and 5.\n";
        }
    }
    user.rateUser(userRating);

    // Driver rating
    string driverRatingInput;
    int driverRating;
    while (true) {
        cout << "Please rate the driver (1-5): ";
        getline(cin, driverRatingInput);
        if (isValidInteger(driverRatingInput, driverRating) && driverRating >= 1 && driverRating <= 5) {
            break;
        } else {
            cout << "Invalid rating. Please enter a number between 1 and 5.\n";
        }
    }
    user.rateDriver(selectedDriver, driverRating);

    // Add Ride to Service
    service.addRide(new Ride(user, selectedDriver, fareAmount, pickupLocation, dropLocation));

    return 0;
}
