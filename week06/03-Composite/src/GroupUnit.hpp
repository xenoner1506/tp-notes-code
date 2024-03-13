#pragma once
#include <list>
#include "Unit.hpp"

class GroupUnit : public Unit {
    protected:
        std::list<Unit *> m_children;
    public:
        void Add(Unit *component) override;
        void Remove(Unit *component) override;
        bool IsGroupUnit() const override;
        std::string Operation() const override;
};