#include "BookingContext.h"

BookingContext::BookingContext() {
    TransitionToState(new NewState());
}

void BookingContext::TransitionToState(BookingState *state) {
    currentState = state;
    currentState->EnterState(this);
}

void BookingContext::SubmitDetails(std::string attendee, int ticketCount) {
    currentState->EnterDetails(this, attendee, ticketCount);

}

void BookingContext::Cancel() {
    currentState->Cancel(this);
}

void BookingContext::DatePassed() {
    currentState->DatePassed(this);
}

void BookingContext::ShowState(std::string stateName) {
    std::cout << "State: " << stateName << "\n"
              << "Number of tickets: " << TicketCount << "\n"
              << "Attendee: " << Attendee << "\n"
              << "BookingID: " << BookingID << std::endl;
}