#include "GroupUnit.hpp"

void GroupUnit::Add(Unit *component) {
    this->m_children.push_back(component);
    component->SetParent(this);
}

void GroupUnit::Remove(Unit *component) {
    m_children.remove(component);
    component->SetParent(nullptr);
}

bool GroupUnit::IsGroupUnit() const {
    return true;
}

std::string GroupUnit::Operation() const {
    std::string result;
    for (const Unit *c : m_children) {
        if (c == m_children.back()) {
            result += c->Operation();
        } else {
            result += c->Operation() + "+";
        }
    }
    return "Branch(" + result + ")";
}
