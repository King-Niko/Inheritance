// Nicholas Walling
// CIS 1202 101
// December 2, 2024
// Inheritance Driver

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include<iostream>
using namespace std;

int main()
{
	// Declare variables for user input
	string manufacturer;
	int yearBuilt, numDoors;
	double towingCapacity;

	// Test the vehicle class
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cin.ignore(); // To ignore newline left by previous input

	Vehicle vehicle(manufacturer, yearBuilt);
	cout << "\nVehicle Info:" << endl;
	vehicle.displayInfo();

	// Test the car class
	cout << "\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter number of doors: ";
	cin >> numDoors;
	cin.ignore();

	Car car(manufacturer, yearBuilt, numDoors);
	cout << "\nCar Info:" << endl;
	car.displayInfo();

	// Test the truck class
	cout << "\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter towing capcity (in lbs): ";
	cin >> towingCapacity;
	cin.ignore();

	Truck truck(manufacturer, yearBuilt, towingCapacity);
	cout << "\nTruck Info:" << endl;
	truck.displayInfo();

	return 0;
}