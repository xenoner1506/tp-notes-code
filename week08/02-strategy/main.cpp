#include <iostream>
#include <map>
#include <string>
#include "DataSaver.h"
#include "Dumper.h"
#include "JsonDumper.h"
#include "TextDumper.h"

int main() {
    std::map<std::string, int> numbers = {{"Zero", 0}, {"One", 1}, {"Two", 2}, {"Three", 3}};
    Dumper *dumper1 = new JsonDumper();
    Dumper *dumper2 = new TextDumper();
    DataSaver* saver1 = new DataSaver("config1", dumper1);
    DataSaver* saver2 = new DataSaver("config2", dumper2);
    saver1->save(numbers);
    saver2->save(numbers);
    delete saver1;
    delete saver2;
    return 0;
}