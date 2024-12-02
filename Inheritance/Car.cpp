// Nicholas Walling
// CIS 1202 101
// December 2, 2024
// Car Implementation File

#include "Car.h"
#include<iostream>
using namespace std;

// Constructor definition
Car::Car(string manufacturer, int yearBuilt, int numDoors)
	: Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

// Getter definitions
int Car::getNumDoors() const
{
	return numDoors;
}

// Setter definitions
void Car::setNumDoors(int numDoors)
{
	this->numDoors = numDoors;
}

// Method to display car info
void Car::displayInfo() const
{
	// Call base class method first
	Vehicle::displayInfo();
	cout << "Number of doors: " << numDoors << endl;
}