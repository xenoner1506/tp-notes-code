#pragma once
#include <string>
#include "ProcessingResult.h"

class BookingContext;

class BookingState {
    public:
        virtual void EnterState(BookingContext *booking) = 0;
        virtual void EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) = 0;
        virtual void DatePassed(BookingContext *booking) = 0;
        virtual void Cancel(BookingContext *booking) = 0;
};