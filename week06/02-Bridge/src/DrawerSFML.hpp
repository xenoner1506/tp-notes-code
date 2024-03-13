#pragma once
#include "Drawer.hpp"

class DrawerSFML : public Drawer {
  public:
   void drawCircle(double x, double y, double radius) override;
};