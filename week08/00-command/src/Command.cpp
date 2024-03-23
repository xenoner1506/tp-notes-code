#include "Command.h"
#include <iostream>

PowerCommand::PowerCommand(Server &server) : server_(server) {}
void PowerCommand::execute() {
  std::cout << "Power ON" << std::endl;
  server_.turnOn();
}
void PowerCommand::unexecute() {
  std::cout << "Power OFF" << std::endl;
  server_.turnOff();
}

LoadCpuCommand::LoadCpuCommand(Server &server) : server_(server) {}
void LoadCpuCommand::execute() {
  std::cout << "CPU ON" << std::endl;
  server_.startCpuCalculate();
}
void LoadCpuCommand::unexecute() {
  std::cout << "CPU OFF" << std::endl;
  server_.stopCpuCalculate();
}

LoadGpuCommand::LoadGpuCommand(Server &server) : server_(server) {}
void LoadGpuCommand::execute() {
  std::cout << "GPU ON" << std::endl;
  server_.startGpuCalculate();
}
void LoadGpuCommand::unexecute() {
  std::cout << "GPU OFF" << std::endl;
  server_.stopGpuCalculate();
}
