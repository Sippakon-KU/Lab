#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
    private:
        point center;
        double radius;
    public:
        Circle(point center, double radius): center(center), radius(radius) {}
        
        double area() {
            return M_PI * this->radius * this->radius;
        }

        double distanceFromCenter(point pt) {
            double distance = sqrt(
                pow((center.xPosition - pt.xPosition), 2) + 
                pow((center.yPosition - pt.yPosition), 2));
            return distance;
        }

        double contains(point pt) {
            if (distanceFromCenter(pt) > radius) {
                return 0;
            } else {
                return 1;
            }
        }
};



int main()
{
   // สร้าง Object เพื่อทดสอบด้วยตัวเอง
}