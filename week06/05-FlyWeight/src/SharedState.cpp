#include "SharedState.hpp"

SharedState::SharedState(const std::string &brand, const std::string &model, const std::string &color)
    : m_brand(brand), m_model(model), m_color(color) { }

std::string SharedState::GetBrand() const {
    return m_brand;
}

std::string SharedState::GetModel() const {
    return m_model;
}

std::string SharedState::GetColor() const {
    return m_color;
}

std::ostream &operator<<(std::ostream &os, const SharedState &ss) {
    return os << "[ " << ss.m_brand << " , " << ss.m_model << " , " << ss.m_color << " ]";
}