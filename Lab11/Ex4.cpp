#include <iostream>
#include <vector>
using namespace std;

// class Material จากข้อก่อนหน้า

class Weapon {
private:
    int durability;
    int damage;
    string weaponType;

public:
    Weapon(int durability, int damage, string weaponType);
    int getDurability();
    int getDamage();
    string getWeaponType();
    int attack();
    bool upgrade(Material material);
    void repair();
    void showStatus();
};

int main() {
    // เขียน main function เพื่อทดสอบเอง
}

Weapon::Weapon(int durability, int damage, string weaponType) {
    this->damage = damage;
    if (this->damage < 0) this->damage = 0;
    else if (this->damage > 100) this->damage = 100;

    this->durability = durability;
    if (this->durability < 0) this->durability = 0;
    else if (this->durability > 100) this->durability = 100;

    this->weaponType = weaponType;
}

int Weapon::getDurability() {
    return durability;
}

int Weapon::getDamage() {
    return damage;
}

string Weapon::getWeaponType() {
    return weaponType;
}

int Weapon::attack() {
    if (durability == 0) return 0;

    durability -= 2;
    if (durability < 0) {
        durability = 0;
    }

    return damage;
}

bool Weapon::upgrade(Material material) {
    if (material.isCompatibleWith(weaponType)) {
        damage += material.getUpgradeValue();
        return 1;
    }

    return 0;
}

void Weapon::repair() {
    durability = 100;
}

void Weapon::showStatus() {
    cout << durability << ' ' << damage << ' ' << weaponType;
}