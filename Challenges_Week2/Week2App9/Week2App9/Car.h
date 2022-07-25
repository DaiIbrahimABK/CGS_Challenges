#pragma once

#include "Vehicle.h"
class Car : public Vehicle

{
public:
	Car(int year, int miles, std::string brand);
	void Drive(int miles) override;
};