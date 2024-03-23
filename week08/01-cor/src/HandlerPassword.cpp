#include "HandlerPassword.h"
#include <regex>

HandlerPassword::HandlerPassword() { }

UserEvent HandlerPassword::Handle(UserEvent& event) {
    std::regex login_regex("^[a-z]");
    std::smatch match;
    if (event.id == Events::CheckPassword && std::regex_search(event.username, match, login_regex)) {
        event.message = "Bad password";
        event.id = Events::CheckFailed;
        return event;
    } else {
        event.id = Events::CheckAccess;
        return BaseHandler::Handle(event);
    }
}