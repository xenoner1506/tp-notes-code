#include "UniqueState.hpp"

UniqueState::UniqueState(const std::string &owner, const std::string &plates)
    : m_owner(owner), m_plates(plates) { }

std::ostream &operator<<(std::ostream &os, const UniqueState &us) {
    return os << "[ " << us.m_owner << " , " << us.m_plates << " ]";
}