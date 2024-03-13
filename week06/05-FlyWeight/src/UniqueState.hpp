#pragma once
#include <string>
#include <sstream>

class UniqueState {
    private:
        std::string m_owner;
        std::string m_plates;
    public:
        UniqueState(const std::string &owner, const std::string &plates);
        friend std::ostream &operator<<(std::ostream &os, const UniqueState &us);
};