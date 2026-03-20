#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D
{
public:
	
 virtual float volumn() = 0;

	
virtual float surfaceArea() = 0;

};

class RightRectangularPyramid: public Shape3D {
private: 
    float width, length, height;

public:
    RightRectangularPyramid(): width(0), length(0), height(0) {}
    RightRectangularPyramid(float width, float lenght, float height): width(width), length(lenght), height(height) {}

    float volumn() override {
        return (1.0/3) * height * width * length;
    }

    float surfaceArea() override {
        float baseArea = width * length;
        float sideLenghtL = 2 * (0.5 * length * sqrt(height*height + (width/2)*(width/2)));
        float sideLenghtW = 2 * (0.5 * width * sqrt(height*height + (length/2)*(length/2)));
        float sideAreas = sideLenghtL + sideLenghtW;
        return baseArea + sideAreas;
    }
};

class Sphere: public Shape3D {
private:
    float radius;
public:
    Sphere(): radius(0) {}
    Sphere(float radius): radius(radius) {}

    float volumn() override {
        return (4.0/3) * M_PI * radius * radius * radius;
    }

    float surfaceArea() override {
        return 4 * M_PI * radius * radius;
    }
};


int main()
{
	int tc;
	cin >> tc;
	if (tc == 1) {
		Shape3D **shapes = new Shape3D*[3];
		shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
		shapes[1] = new Sphere(10.6);
		shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
		for (int i = 0; i < 3; i++) {
			cout << "Volumn: " << (*shapes)->volumn() << endl;
			cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
			cout << "--------------------\n";
			*shapes++;
		}
	} else if (tc == 2) {
		RightRectangularPyramid rectangle;
		Sphere sphere;
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 3) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
	} else if (tc == 4) {
		Sphere sphere(34.25);
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 5) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		Sphere sphere(34.25);
		Shape3D *shape = &rectangle;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
		shape = &sphere;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
	} else if(tc == 6) {
	}

}