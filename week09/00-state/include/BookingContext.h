#pragma once
#include <string>
#include <iostream>
#include "states/BookingState.h"
#include "states/NewState.h"


class BookingContext {
    public:

        std::string Attendee;
        int TicketCount;
        int BookingID = 0;
        BookingState *currentState;

    public:
        BookingContext();
        void TransitionToState(BookingState *state);
        void SubmitDetails(std::string attendee, int ticketCount);
        void Cancel();
        void DatePassed();
        void ShowState(std::string stateName);
};