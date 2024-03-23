#pragma once
#include <map>
#include <string>

class Dumper {
    public:
        virtual std::string dictDump(std::map<std::string, int>&) const = 0;
};