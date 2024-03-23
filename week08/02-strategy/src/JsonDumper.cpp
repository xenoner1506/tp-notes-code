#include "JsonDumper.h"
#include "nlohmann/json.hpp"

std::string JsonDumper::dictDump(std::map<std::string, int>& data) const {
    nlohmann::json result_json = data;
    return result_json.dump();
}