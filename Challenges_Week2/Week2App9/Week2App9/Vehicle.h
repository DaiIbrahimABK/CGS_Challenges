#pragma once
class Vehicle {
protected:
    int m_year;
    int m_miles;
    std::string m_brand;
public:
    Vehicle(int year, int miles, std::string brand);
    void Display();
    virtual void Drive(int miles) = 0;

};