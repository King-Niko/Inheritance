// Nicholas Walling
// CIS 1202 101
// December 2, 2024
// Vehicle Implementation File

#include "Vehicle.h"
#include<iostream>
using namespace std;

// Constructor definition
Vehicle::Vehicle(string manufacturer, int yearBuilt)
	: manufacturer(manufacturer), yearBuilt(yearBuilt) {}

// Getter definitions
string Vehicle::getManufacturer() const
{
	return manufacturer;
}

int Vehicle::getYearBuilt() const
{
	return yearBuilt;
}

// Setter definitions
void Vehicle::setManufacturer(const string& manufacturer)
{
	this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt)
{
	this->yearBuilt = yearBuilt;
}

// Method to diplsay vehicle information
void Vehicle::displayInfo() const
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}