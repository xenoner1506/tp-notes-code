#include <iostream>
#include "Flyweight.hpp"


Flyweight::Flyweight(const SharedState *shared_state) : m_shared_state(new SharedState(*shared_state)) { }

Flyweight::Flyweight(const Flyweight &other) : m_shared_state(new SharedState(*other.m_shared_state)) { }

SharedState *Flyweight::shared_state() const {
    return m_shared_state;
}

void Flyweight::Operation(const UniqueState &unique_state) const {
    std::cout << "Flyweight: Displaying shared (" << *m_shared_state << ") and unique (" << unique_state << ") state.\n";
}

Flyweight::~Flyweight() {
    delete m_shared_state;
}