#pragma once
#include "states/BookingState.h"

class ClosedState : public BookingState {
    public:
        ClosedState(std::string_view);
        void EnterState(BookingContext *booking) override;
        void EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) override;
        void DatePassed(BookingContext *booking) override;
        void Cancel(BookingContext *booking) override;
};