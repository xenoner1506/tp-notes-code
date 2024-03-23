#include <fstream>
#include "DataSaver.h"

DataSaver::DataSaver(const std::string& filename, Dumper* dumper) : filename_(filename), dumper_(dumper) {}

void DataSaver::save(std::map<std::string, int>& data) const {
    std::ofstream foutput(filename_);
    std::string raw = dumper_->dictDump(data);
    foutput << raw;
}

DataSaver::~DataSaver() {
    delete dumper_;
}