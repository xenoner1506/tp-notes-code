#pragma once
#include "Dumper.h"

class TextDumper : public Dumper {
    public:
        std::string dictDump(std::map<std::string, int>&) const override;
};