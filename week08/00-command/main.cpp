#include "Command.h"
#include "Server.h"
#include <iostream>

int main() {
  Server server = Server();
  Command *power = new PowerCommand(server);
  Command *cpu = new LoadCpuCommand(server);
  Command *gpu = new LoadGpuCommand(server);
  power->execute();
  cpu->execute();
  gpu->execute();
  gpu->unexecute();
  cpu->unexecute();
  power->unexecute();
  delete power;
  delete cpu;
  delete gpu;
}
