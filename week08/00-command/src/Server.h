#pragma once

class Server {
private:
  bool is_plugged_in = false;
  bool is_cpu_busy = false;
  bool is_gpu_busy = false;

public:
  Server();
  void turnOn();
  void startCpuCalculate();
  void stopCpuCalculate();
  void startGpuCalculate();
  void stopGpuCalculate();
  void turnOff();
};
