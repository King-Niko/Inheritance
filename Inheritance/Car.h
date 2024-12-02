// Nicholas Walling
// CIS 1202 101
// December 2, 2024
// Car Header File

#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include<iostream>
using namespace std;

class Car : public Vehicle
{
private:
	int numDoors;

public:
	// Constructor
	Car(string manufacturer = "", int yearBuilt = 2024, int numDoors = 0);

	// Getters
	int getNumDoors() const;

	// Setters
	void setNumDoors(int numDoors);

	// Method to display car info
	void displayInfo() const override;
};

#endif