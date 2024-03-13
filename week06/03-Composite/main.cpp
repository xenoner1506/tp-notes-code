#include <algorithm>
#include <iostream>
#include "Leaf.hpp"
#include "Unit.hpp"
#include "GroupUnit.hpp"


void ClientCode(Unit *component) {
    std::cout << "RESULT: " << component->Operation();
}

void ClientCode2(Unit *component1, Unit *component2) {
    if (component1->IsGroupUnit()) {
        component1->Add(component2);
    }
    std::cout << "RESULT: " << component1->Operation();
}


int main() {
    Unit *simple = new Leaf;
    std::cout << "Client: I've got a simple component:\n";
    ClientCode(simple);
    std::cout << "\n\n";

    Unit *tree = new GroupUnit;
    Unit *branch1 = new GroupUnit;

    Unit *leaf_1 = new Leaf;
    Unit *leaf_2 = new Leaf;
    Unit *leaf_3 = new Leaf;
    branch1->Add(leaf_1);
    branch1->Add(leaf_2);
    Unit *branch2 = new GroupUnit;
    branch2->Add(leaf_3);
    tree->Add(branch1);
    tree->Add(branch2);
    std::cout << "Client: Now I've got a composite tree:\n";
    ClientCode(tree);
    std::cout << "\n\n";

    std::cout << "Client: I don't need to check the components classes even when managing the tree:\n";
    ClientCode2(tree, simple);
    std::cout << "\n";

    delete simple;
    delete tree;
    delete branch1;
    delete branch2;
    delete leaf_1;
    delete leaf_2;
    delete leaf_3;

    return 0;
}
