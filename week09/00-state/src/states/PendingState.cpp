#include <random>
#include "states/PendingState.h"

void PendingState::Cancel(BookingContext *booking) {
    CancellationToken->Cancel();
}

void PendingState::DatePassed(BookingContext *booking) {}

void PendingState::EnterDetails(BookingContext *booking, std::string attendee, int ticketCount) {}

void PendingState::EnterState(BookingContext *booking) {
    CancellationToken = new CancellationTokenSource();
    booking->ShowState("Pending");

    ProcessingComplete(booking, static_cast<ProcessingResult>(rand() % 3));
}

void PendingState::ProcessingComplete(BookingContext *booking, ProcessingResult result) {
    switch (result)
    {
        case ProcessingResult::Success:
            booking->TransitionToState(new BookedState());
            break;
        case ProcessingResult::Fail:
            // booking->View.ShowProcessingError();
            booking->TransitionToState(new NewState());
            break;
        case ProcessingResult::Cancel:
            booking->TransitionToState(new ClosedState("Processing cancelled"));
            break;
        default:
            break;
    }
}
