#include <iostream>
#include <string>
using namespace std;

class Hero {
    private:
        string name;
        int level;

    public:
        Hero(string name, int level) : name(name), level(level) {}

        string getName() {
            return this->name;
        }

        int getLevel() {
            return this->level;
        }

        void setName(string name) {
            this->name = name;
        }

        void setLevel(int level) {
            this->level = level;
        }
};


int main()
{
   // สร้าง object เพื่อทดสอบด้วยตัวเอง
}