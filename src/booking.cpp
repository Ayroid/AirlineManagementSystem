#include <iostream>
#include "booking.h"

Booking::Booking(const Flight& flight) : flight(flight) {}

void Booking::bookFlight(const Passenger& passenger) {
    bookedPassengers.push_back(passenger);
}

void Booking::displayBookedFlights() const {
    for (const auto& passenger : bookedPassengers) {
        std::cout << "Flight Number: " << flight.getFlightNumber() << "\n";
        passenger.displayPassengerInfo();
        std::cout << "\n";
    }
}
