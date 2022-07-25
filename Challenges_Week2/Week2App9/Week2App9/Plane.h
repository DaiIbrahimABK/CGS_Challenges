#pragma once
#include "Vehicle.h"
class Plane : public Vehicle

{
public:
	Plane(int year, int miles, std::string brand);
	void Drive(int miles) override;
}; 
