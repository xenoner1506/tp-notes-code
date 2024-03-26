#include "states/NewState.h"

void NewState::EnterState(BookingContext *booking) {
    booking->BookingID++;
    booking->ShowState("New");
}

void NewState::EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) {
    booking->Attendee = attendee;
    booking->TicketCount = ticketCount;
    booking->TransitionToState(new PendingState());
}

void NewState::DatePassed(BookingContext *booking) {
    booking->TransitionToState(new ClosedState("Booking expired"));
}

void NewState::Cancel(BookingContext *booking) {
    booking->TransitionToState(new ClosedState("Booking cancelled"));
}