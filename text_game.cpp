#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class Monster {
public:
    std::string name;
    int health;
    int damage;

    Monster(std::string n, int h, int d) : name(n), health(h), damage(d) {}
};

class Player {
public:
    std::string name;
    int health;
    int damage;
    std::vector<std::string> inventory;

    Player(std::string n) : name(n), health(100), damage(10) {}

    void takeDamage(int d) {
        health -= d;
        if (health < 0) health = 0;
    }

    bool isAlive() {
        return health > 0;
    }

    void addItem(std::string item) {
        inventory.push_back(item);
    }

    void showInventory() {
        std::cout << "Inventory: ";
        for (const auto& item : inventory) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
};

void fight(Player& player, Monster& monster) {
    std::cout << "A wild " << monster.name << " appears!" << std::endl;
    while (player.isAlive() && monster.health > 0) {
        std::cout << "You attack the " << monster.name << " for " << player.damage << " damage!" << std::endl;
        monster.health -= player.damage;

        if (monster.health > 0) {
            std::cout << "The " << monster.name << " attacks you for " << monster.damage << " damage!" << std::endl;
            player.takeDamage(monster.damage);
        }

        std::cout << "Your health: " << player.health << ", " << monster.name << " health: " << monster.health << std::endl;
    }

    if (player.isAlive()) {
        std::cout << "You defeated the " << monster.name << "!" << std::endl;
        player.addItem("Monster Tooth");
    } else {
        std::cout << "You were defeated by the " << monster.name << "." << std::endl;
    }
}

void explore(Player& player) {
    std::vector<Monster> monsters = {
        {"Goblin", 30, 5},
        {"Orc", 50, 10},
        {"Dragon", 100, 20}
    };

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int action;

    do {
        std::cout << "\nYou are in a dark dungeon. What do you want to do?" << std::endl;
        std::cout << "1. Fight a monster" << std::endl;
        std::cout << "2. Check inventory" << std::endl;
        std::cout << "3. Exit dungeon" << std::endl;
        std::cout << "Choose an action (1-3): ";
        std::cin >> action;

        if (action == 1) {
            int monsterIndex = std::rand() % monsters.size();
            fight(player, monsters[monsterIndex]);
        } else if (action == 2) {
            player.showInventory();
        }
    } while (action != 3 && player.isAlive());

    if (!player.isAlive()) {
        std::cout << "Game Over! You died." << std::endl;
    } else {
        std::cout << "You exit the dungeon safely." << std::endl;
    }
}

int main() {
    std::string playerName;
    std::cout << "Enter your character's name: ";
    std::cin >> playerName;

    Player player(playerName);
    explore(player);

    return 0;
}
