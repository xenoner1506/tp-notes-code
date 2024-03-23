#pragma once
#include <iostream>
#include "UserEvent.h"

class IHandler {
    public:
        virtual IHandler* SetNext(IHandler* handler) = 0;
        virtual UserEvent Handle(UserEvent& event) = 0;
        virtual ~IHandler() {};
};