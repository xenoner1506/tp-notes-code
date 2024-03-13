#pragma once
#include "Drawer.hpp"

class DrawerGL : public Drawer {
  public:
   void drawCircle(double x, double y, double radius) override;
};