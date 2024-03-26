#pragma once
#include "BookingContext.h"
#include "states/BookingState.h"
#include "states/NewState.h"
#include "states/ClosedState.h"
#include "states/PendingState.h"

class NewState : public BookingState {
    public:
        void EnterState(BookingContext *booking) override;
        void EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) override;
        void DatePassed(BookingContext *booking) override;
        void Cancel(BookingContext *booking) override;
};