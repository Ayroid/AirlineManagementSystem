#ifndef BOOKING_H
#define BOOKING_H

#include <vector>
#include "flight.h"
#include "passenger.h"

class Booking {
public:
    Booking(const Flight& flight);

    void bookFlight(const Passenger& passenger);
    void displayBookedFlights() const;

private:
    const Flight& flight;
    std::vector<Passenger> bookedPassengers;
};

#endif
