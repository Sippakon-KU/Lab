#include <iostream>
#include <string>

using namespace std;

class Hero // สร้าง class Hero ด้วยตัวเอง

int main()
{
string name;
    int level;

    cin >> name >> level;

    Hero hero(name, level);
    cout << hero.getName() << " " << hero.getLevel() << endl;

}