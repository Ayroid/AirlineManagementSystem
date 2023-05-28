#include <iostream>
#include "passenger.h"

Passenger::Passenger(const std::string& name, const std::string& passportNumber)
    : name(name), passportNumber(passportNumber) {}

void Passenger::displayPassengerInfo() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Passport Number: " << passportNumber << "\n";
}
