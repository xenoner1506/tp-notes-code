#include "HandlerLogin.h"
#include <regex>

HandlerLogin::HandlerLogin() { }

UserEvent HandlerLogin::Handle(UserEvent& event) {
    std::regex login_regex("^[0-9]+");
    std::smatch match;
    if (event.id == Events::CheckUsername && std::regex_search(event.username, match, login_regex)) {
        event.message = "Bad password";
        event.id = Events::CheckFailed;
        return event;
    } else {
        event.id = Events::CheckPassword;
        return BaseHandler::Handle(event);
    }
}