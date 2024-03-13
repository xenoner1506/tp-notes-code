#pragma once
#include "Unit.hpp"

class Leaf : public Unit {
    public:
        std::string Operation() const override;
};