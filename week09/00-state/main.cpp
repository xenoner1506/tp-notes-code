#include <iostream>
#include "BookingContext.h"
#include "states/BookingState.h"

int main() {
    int n_tickets;
    std::string attendee;
    BookingContext *context = new BookingContext();
    std::cout << "Enter attendee: ";
    std::cin >> attendee;
    std::cout << "Enter number of tickets: ";
    std::cin >> n_tickets;
    context->SubmitDetails(attendee, n_tickets);
    context->Cancel();
    delete context;
    return 0;
}