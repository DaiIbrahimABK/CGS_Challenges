#pragma once
#include "Vehicle.h"
class Boat : public Vehicle

{
public:
	Boat(int year, int miles, std::string brand);
	void Drive(int miles) override;
};