#include <iostream>
#include "flight.h"
#include "passenger.h"
#include "booking.h"

int main() {
    Flight flight("F1234", "AirIndia", "Mumbai", "Dehli", "2023-05-29", "08:00", 200);

    Passenger passenger1("Ayush Singh", "A12345");
    Passenger passenger2("Not Ayush Singh", "B67890");

    flight.addPassenger(passenger1);
    flight.addPassenger(passenger2);

    std::cout << "Flight Details:\n";
    flight.displayFlightDetails();

    std::cout << "\nPassenger Details:\n";
    flight.displayPassengerDetails();

    Booking booking(flight);
    booking.bookFlight(passenger1);
    booking.bookFlight(passenger2);

    std::cout << "\nBooked Flights:\n";
    booking.displayBookedFlights();

    return 0;
}
