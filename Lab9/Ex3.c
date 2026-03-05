#include <stdio.h>
#include <math.h>

struct Point {
    double X, Y;
};

int main() {
    int n;

    printf("Number of Points: ");
    scanf("%d", &n);

    struct Point points[n];

    for (int i = 0; i < n; i++) {
        printf("P%d.X: ", i+1);
        scanf("%lf", &points[i].X);
        printf("P%d.Y: ", i+1);
        scanf("%lf", &points[i].Y);
    }

    printf("Length:\n");
    for (int i = 0; i < n-1; i++) {
        double dx, dy;
        dx = points[i].X - points[i+1].X;
        dy = points[i].Y - points[i+1].Y;

        double length = sqrt(dx*dx + dy*dy);

        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n",
            i+1, points[i].X, points[i].Y, i+2, points[i+1].X, points[i+1].Y, length);
    }
}