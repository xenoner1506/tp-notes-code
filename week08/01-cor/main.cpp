#include <iostream>
#include "HandlerAccess.h"
#include "HandlerLogin.h"
#include "HandlerPassword.h"
#include "BaseHandler.h"
#include "IHandler.h"
#include "UserEvent.h"

int main() {
    IHandler* web_checker = new BaseHandler();
    IHandler* login_checker = new HandlerLogin();
    IHandler* password_checker = new HandlerPassword();
    IHandler* access_checker = new HandlerAccess();
    web_checker->SetNext(login_checker)->SetNext(password_checker)->SetNext(access_checker);
    UserEvent first_user;
    first_user.username = "Xenoner";
    first_user.password = "xenoner";
    web_checker->Handle(first_user);
    std::cout << first_user.message;
    return 0;
}