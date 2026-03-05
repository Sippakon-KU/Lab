#include <stdio.h>

double findAverage(char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0.0;
    }

    double sum = 0.0;
    int count = 0;
    int score;

    while (fscanf(fp, "%d", &score) == 1) {
        sum += score;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        return 0.0;
    }

    return sum / count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}