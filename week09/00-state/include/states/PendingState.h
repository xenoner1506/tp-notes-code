#pragma once
#include "BookingContext.h"
#include "states/BookingState.h"
#include "states/BookedState.h"
#include "CancellationTokenSource.h"


class PendingState : public BookingState {
    private:
        CancellationTokenSource *CancellationToken;
    public:
        void EnterState(BookingContext *booking) override;
        void EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) override;
        void DatePassed(BookingContext *booking) override;
        void Cancel(BookingContext *booking) override;

    private:
        void ProcessingComplete(BookingContext *booking, ProcessingResult result);
};