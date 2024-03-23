#pragma once
#include <map>
#include <string>
#include <string_view>
#include "Dumper.h"

class DataSaver {
    private:
        std::string filename_;
        Dumper *dumper_;
    public:
        DataSaver() = delete;
        DataSaver(const std::string&, Dumper*);
        void save(std::map<std::string, int>&) const;
        ~DataSaver();
};