#pragma once
#include "IHandler.h"


class BaseHandler : public IHandler {
    protected:
        IHandler* next_handler = nullptr;
    public:
        BaseHandler();
        IHandler* SetNext(IHandler*) override;
        UserEvent Handle(UserEvent&) override;
};