#include "HandlerAccess.h"
#include <regex>

HandlerAccess::HandlerAccess() { }

UserEvent HandlerAccess::Handle(UserEvent& event) {
    std::regex login_regex("admin");
    std::smatch match;
    if (event.id == Events::CheckAccess && std::regex_search(event.username, match, login_regex)) {
        event.message = "It is an admin";
        event.id = Events::CheckFinished;
        return event;
    } else {
        event.message = "It is not an admin";
        event.id = Events::CheckFinished;
        return BaseHandler::Handle(event);
    }
}