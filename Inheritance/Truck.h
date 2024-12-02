// Nicholas Walling
// CIS 1202 101
// December 2, 2024
// Truck Header File

#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include<iostream>
using namespace std;

class Truck : public Vehicle
{
private:
	double towingCapacity;

public:
	// Constructor
	Truck(string manufacturer = "", int yearBuilt = 2024, double towingCapacity = 0.0);

	// Getters
	double getTowingCapacity() const;

	// Setters
	void setTowingCapacity(double towingCapcity);

	// Method to display truck info
	void displayInfo() const override;
};

#endif