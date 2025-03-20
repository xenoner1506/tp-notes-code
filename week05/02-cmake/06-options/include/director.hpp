#pragma once
#include <memory>
#include "builder.hpp"

class Director {
    private:
        std::shared_ptr<Builder> builder;
    public:
        void SetBuilder(std::shared_ptr<Builder>);
        std::shared_ptr<Character> CreateCharacter() const;
};