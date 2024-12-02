// Nicholas Walling
// CIS 1202 101
// December 2, 2024
// Truck Implementation File

#include "Truck.h"
#include<iostream>
using namespace std;

// Constructor definition
Truck::Truck(string manufacturer, int yearBuilt, double towingCapacity)
	: Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

// Getter definitions
double Truck::getTowingCapacity() const
{
	return towingCapacity;
}

// Setter definition
void Truck::setTowingCapacity(double towingCapacity)
{
	this->towingCapacity = towingCapacity;
}

// Method to display truck information
void Truck::displayInfo() const
{
	// Call the base class method first
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << "lbs" << endl;
}