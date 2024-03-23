#pragma once

#include "Server.h"
class Command {
public:
  virtual void execute() = 0;
  virtual void unexecute() = 0;
  virtual ~Command() {}
};

class PowerCommand : public Command {
private:
  Server &server_;

public:
  PowerCommand(Server &);
  void execute() override;
  void unexecute() override;
};

class LoadCpuCommand : public Command {
private:
  Server &server_;

public:
  LoadCpuCommand(Server &);
  void execute() override;
  void unexecute() override;
};

class LoadGpuCommand : public Command {
private:
  Server &server_;

public:
  LoadGpuCommand(Server &);
  void execute() override;
  void unexecute() override;
};
