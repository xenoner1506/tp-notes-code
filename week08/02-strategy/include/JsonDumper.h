#pragma once
#include "Dumper.h"

class JsonDumper : public Dumper {
    public:
        std::string dictDump(std::map<std::string, int>&) const override;
};