#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
#include <vector>
#include "passenger.h"

class Flight {
public:
    Flight(const std::string& flightNumber, const std::string& airline, const std::string& source,
           const std::string& destination, const std::string& date, const std::string& time, int capacity);

    void addPassenger(const Passenger& passenger);
    void displayFlightDetails() const;
    void displayPassengerDetails() const;
    std::string getFlightNumber() const; // Added getFlightNumber() method

private:
    std::string flightNumber;
    std::string airline;
    std::string source;
    std::string destination;
    std::string date;
    std::string time;
    int capacity;
    std::vector<Passenger> passengers;
};

#endif  // FLIGHT_H
