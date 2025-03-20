#include "builder.hpp"
#include "character.hpp"
#include "director.hpp"
#include <iostream>
#include <memory>


int main() {
  #ifdef DEBUG
  std::cerr << "Create boulders and directors\n";
  #endif
  std::shared_ptr<Director> director = std::make_shared<Director>();
  std::shared_ptr<Builder> archer_builder = std::make_shared<ArcherBuilder>();
  std::shared_ptr<Builder> mage_builder = std::make_shared<MageBuilder>();
  std::shared_ptr<Character> mage = std::make_shared<Character>();

  director->SetBuilder(archer_builder);

  std::shared_ptr<Character> archer0 = director->CreateCharacter();
  std::shared_ptr<Character> archer1 = director->CreateCharacter();

  #ifdef DEBUG
  std::cerr << "Set properties for archers\n";
  #endif
  archer0->SetAgility(12);
  archer1->SetAgility(122);

  director->SetBuilder(mage_builder);
  std::shared_ptr<Character> mage0 = director->CreateCharacter();
  std::shared_ptr<Character> mage1 = director->CreateCharacter();

  #ifdef DEBUG
  std::cerr << "End program" << std::endl;
  #endif
  return 0;
}
