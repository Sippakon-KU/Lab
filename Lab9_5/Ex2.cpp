#include <iostream>
using namespace std;

int main() {
    string name;
    char output[100];
    double salary, totalIncome = 0;

    cin >> name >> salary;

    for (int i = 0; i < 12; i++) {
        double sold;
        cin >> sold;

        totalIncome += salary + sold*0.15;
    }

    sprintf(output, "%s %.2f", name.c_str(), totalIncome);
    cout << output << endl;
}