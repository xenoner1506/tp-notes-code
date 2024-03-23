#include "TextDumper.h"

std::string TextDumper::dictDump(std::map<std::string, int>& data) const {
    std::string result = "";
    for (const auto& pair: data) {
        result += pair.first + ": " + std::to_string(pair.second) + "\n";
    }
    return result;
}