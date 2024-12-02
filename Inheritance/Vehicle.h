// Nicholas Walling
// CIS 1202 101
// December 2, 2024
// Vehicle Header File

#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;

public:
	// Constructor
	Vehicle(string manufacturer = "", int yearBuilt = 2024);

	// Getters
	string getManufacturer() const;
	int getYearBuilt() const;

	// Setters
	void setManufacturer(const string& manufacturer);
	void setYearBuilt(int yearBuilt);

	// Method to display vehicle info
	virtual void displayInfo() const;
};

#endif