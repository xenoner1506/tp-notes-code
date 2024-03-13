#pragma once
#include "SharedState.hpp"
#include "UniqueState.hpp"

class Flyweight {
    private:
        SharedState *m_shared_state;
    
    public:
        Flyweight(const SharedState *shared_state);
        Flyweight(const Flyweight &other);
        SharedState *shared_state() const;
        void Operation(const UniqueState &unique_state) const;
        ~Flyweight();
};