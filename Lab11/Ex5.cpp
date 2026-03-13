#include <iostream>
#include <vector>
using namespace std;

// class Material จากข้อก่อนหน้า
// class Weapon จากข้อก่อนหน้า

class Sword : public Weapon {
private:
    double criticalMultiplier;

public:
    Sword(int durability, int damage, double criticalMultiplier);
    double getCriticalMultiplier();
    void setCriticalMultiplier(double multiplier);
    int attack();
    void showStatus();
};

int main() {
    // เขียน main function เพื่อทดสอบเอง
}

Sword::Sword(int durability, int damage, double criticalMultiplier): 
    Weapon(durability, damage, "Sword"), 
    criticalMultiplier(criticalMultiplier) {
        if (this->criticalMultiplier < 1.0) {
            this->criticalMultiplier = 1.0;
        }
}

double Sword::getCriticalMultiplier() {
    return criticalMultiplier;
}

void Sword::setCriticalMultiplier(double criticalMultiplier) {
    this->criticalMultiplier = criticalMultiplier;
    if (this->criticalMultiplier < 1.0) {
        this->criticalMultiplier = 1.0;
    }
}

int Sword::attack() {
    int damage = Weapon::attack();
    damage *= criticalMultiplier;

    return damage;
}

void Sword::showStatus() {
    cout << getDurability() << ' '
         << getDamage() << ' '
         << getWeaponType() << ' '
         << getCriticalMultiplier() << ' ';
}