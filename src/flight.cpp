#include <iostream>
#include "flight.h"

Flight::Flight(const std::string& flightNumber, const std::string& airline, const std::string& source,
               const std::string& destination, const std::string& date, const std::string& time, int capacity)
    : flightNumber(flightNumber), airline(airline), source(source), destination(destination), date(date), time(time),
      capacity(capacity) {}

void Flight::addPassenger(const Passenger& passenger) {
    passengers.push_back(passenger);
}

void Flight::displayFlightDetails() const {
    std::cout << "Flight Number: " << flightNumber << "\n";
    std::cout << "Airline: " << airline << "\n";
    std::cout << "Source: " << source << "\n";
    std::cout << "Destination: " << destination << "\n";
    std::cout << "Date: " << date << "\n";
    std::cout << "Time: " << time << "\n";
    std::cout << "Capacity: " << capacity << "\n";
    std::cout << "Available Seats: " << capacity - passengers.size() << "\n";
}

void Flight::displayPassengerDetails() const {
    for (const auto& passenger : passengers) {
        passenger.displayPassengerInfo();
    }
}

std::string Flight::getFlightNumber() const {
    return flightNumber;
}