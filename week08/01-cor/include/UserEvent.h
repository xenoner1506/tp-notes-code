#pragma once
#include <string>

enum Events { CheckUsername = 0, CheckPassword, CheckAccess, CheckFinished, CheckFailed };

struct UserEvent {
    Events id = Events::CheckUsername;
    std::string username = "";
    std::string password = "";
    std::string message = "";
};