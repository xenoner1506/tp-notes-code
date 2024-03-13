#include "Unit.hpp"

void Unit::SetParent(Unit *parent) {
    this->m_parent = parent;
}

Unit *Unit::GetParent() const {
    return this->m_parent;
}

void Unit::Add(Unit *component) { }

void Unit::Remove(Unit *component) { }

bool Unit::IsGroupUnit() const {
    return false;
}

Unit::~Unit() { }
