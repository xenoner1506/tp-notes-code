#include "states/ClosedState.h"

ClosedState::ClosedState(std::string_view ) {}

void ClosedState::EnterState(BookingContext *booking) {}

void ClosedState::EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) {}

void ClosedState::DatePassed(BookingContext *booking) {}

void ClosedState::Cancel(BookingContext *booking) {}
