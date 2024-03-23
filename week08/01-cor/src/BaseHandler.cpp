#include "BaseHandler.h"

BaseHandler::BaseHandler() : next_handler(nullptr) { }

IHandler* BaseHandler::SetNext(IHandler* handler) {
    std::cout << "set_next" << std::endl;
    next_handler = handler;
    return handler;
}

UserEvent BaseHandler::Handle(UserEvent& event) {
    if (next_handler) {
        return this->next_handler->Handle(event);
    }
    return {};
}
