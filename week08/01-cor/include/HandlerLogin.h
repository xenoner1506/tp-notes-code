#pragma once
#include "BaseHandler.h"

class HandlerLogin : public BaseHandler {
    public:
        HandlerLogin();
        UserEvent Handle(UserEvent&) override;
};