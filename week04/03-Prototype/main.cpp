#include "enemy.hpp"
#include "spawner.hpp"
#include <vector>

int main() {
  std::vector<Enemy *> enemies;
  Enemy *ghost_prototype = new Ghost("Boo");
  Enemy *goblin_prototype = new Goblin("Argh");
  Spawner ghost_spawner = Spawner(ghost_prototype);
  Spawner goblin_spawner = Spawner(goblin_prototype);

  for (size_t i = 0; i != 5; ++i) {
    enemies.emplace_back(ghost_spawner.clone());
    enemies.emplace_back(goblin_spawner.clone());
  }

  for (Enemy *clone : enemies) {
    delete clone;
  }
  delete ghost_prototype;
  delete goblin_prototype;
}
