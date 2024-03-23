#pragma once
#include "BaseHandler.h"

class HandlerAccess : public BaseHandler {
    public:
        HandlerAccess();
        UserEvent Handle(UserEvent&) override;
};