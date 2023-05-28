#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
public:
    Passenger(const std::string& name, const std::string& passportNumber);

    void displayPassengerInfo() const;

private:
    std::string name;
    std::string passportNumber;
};

#endif
