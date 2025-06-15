#include <iostream>
using namespace std;

class Character {
public:
    string name;
    int hp;

    Character(string n, int h) {
        name = n;
        hp = h;
    }

    void display() {
        cout << name << " has " << hp << " HP\n";
    }
};

class Warrior : public Character {
public:
    Warrior(string n, int h) : Character(n, h) {}

    void attack() {
        cout << name << " swings a sword!\n";
    }
};

int main() {
    Warrior w("Knight", 100);
    w.display();
    w.attack();

    return 0;
}
