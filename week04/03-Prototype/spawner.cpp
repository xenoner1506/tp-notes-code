#include "spawner.hpp"

Spawner::Spawner(Enemy *prototype) : prototype_(prototype) {}
Enemy *Spawner::clone() const { return prototype_->clone(); }
