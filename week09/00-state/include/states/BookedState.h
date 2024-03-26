#pragma once
#include "BookingContext.h"
#include "states/BookingState.h"

class BookedState : public BookingState {
    public:
        void EnterState(BookingContext *booking) override;
        void EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) override;
        void DatePassed(BookingContext *booking) override;
        void Cancel(BookingContext *booking) override;
};