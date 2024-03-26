#include "states/BookedState.h"

void BookedState::EnterState(BookingContext *booking) {
    booking->ShowState("Booked");
}

void BookedState::EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) {}

void BookedState::DatePassed(BookingContext *booking) {
    booking->TransitionToState(new ClosedState("We hope you enjoyed the event."));
}

void BookedState::Cancel(BookingContext *booking) {
    booking->TransitionToState(new ClosedState("Booking cancelled, expect a refund."));
}
