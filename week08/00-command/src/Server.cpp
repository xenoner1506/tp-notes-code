#include "Server.h"

Server::Server() {}

void Server::turnOn() { is_plugged_in = true; }

void Server::startCpuCalculate() { is_cpu_busy = true; }

void Server::stopCpuCalculate() { is_cpu_busy = false; }

void Server::startGpuCalculate() { is_gpu_busy = true; }

void Server::stopGpuCalculate() { is_gpu_busy = false; }

void Server::turnOff() { is_plugged_in = false; }
