#pragma once
#include "BaseHandler.h"

class HandlerPassword : public BaseHandler {
    public:
        HandlerPassword();
        UserEvent Handle(UserEvent&) override;
};