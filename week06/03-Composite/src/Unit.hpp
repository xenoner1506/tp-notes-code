#pragma once
#include <string>

class Unit {
    protected:
        Unit *m_parent;
    public:
        void SetParent(Unit *);
        Unit *GetParent() const;
        virtual void Add(Unit *);
        virtual void Remove(Unit *);
        virtual bool IsGroupUnit() const;
        virtual std::string Operation() const = 0;
        virtual ~Unit();
};