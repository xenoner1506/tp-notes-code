#include "FlyweightFactory.hpp"

std::string FlyweightFactory::GetKey(const SharedState &ss) const {
    return ss.GetBrand() + "_" + ss.GetModel() + "_" + ss.GetColor();
}

FlyweightFactory::FlyweightFactory(std::initializer_list<SharedState> share_states) {
    for (const SharedState &ss : share_states) {
        this->m_flyweights.insert(std::make_pair<std::string, Flyweight>(this->GetKey(ss), Flyweight(&ss)));
    }
}

Flyweight FlyweightFactory::GetFlyweight(const SharedState &shared_state) {
    std::string key = this->GetKey(shared_state);
    if (this->m_flyweights.find(key) == this->m_flyweights.end()) {
        std::cout << "FlyweightFactory: Can't find a flyweight, creating new one.\n";
        this->m_flyweights.insert(std::make_pair(key, Flyweight(&shared_state)));
    } else {
        std::cout << "FlyweightFactory: Reusing existing flyweight.\n";
    }
    return this->m_flyweights.at(key);
}

void FlyweightFactory::ListFlyweights() const {
    size_t count = this->m_flyweights.size();
    std::cout << "\nFlyweightFactory: I have " << count << " flyweights:\n";
    for (std::pair<std::string, Flyweight> pair : this->m_flyweights) {
        std::cout << pair.first << "\n";
    }
}