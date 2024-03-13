#pragma once
#include <string>
#include <ostream>

class SharedState {
    private:
        std::string m_brand;
        std::string m_model;
        std::string m_color;
    public:
        SharedState(const std::string &brand, const std::string &model, const std::string &color);
        std::string GetBrand() const;
        std::string GetModel() const;
        std::string GetColor() const;
        friend std::ostream &operator<<(std::ostream &os, const SharedState &ss);
};