#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle // เขียน Class Circle เอง

int main()
{
double x, y;
    point center, P;
    double radius;

    cout << "Center of Circle: ";
    cin >> x >> y;
    center = {x, y};
    
    cout << "Radius of Circle: ";
    cin >> radius;

    Circle a(center, radius);

    cout << "Point to Check: ";
    cin >> x >> y;
    P = {x, y};

    cout << "Area of Circle is " << a.area() << endl;
    cout << "Distance from Center to Point (" << P.xPosition << ", " << P.yPosition << ") is " << a.distanceFromCenter(P) << endl;
    if (a.contains(P)) {
        cout << "This circle contains this point." << endl;
    } else {
        cout << "This point is not in this circle." << endl;
    }
}