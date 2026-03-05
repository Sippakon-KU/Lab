#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
	int num, count, target, i;

	scanf("%d", &num);
	scanf("%d", &count);

	int numbers[num];
	int *numbersPtr = &numbers[0];

	// initialize array numbers from 1 to num by numbersPtr
	for (int i = 1; i <= num; i++, numbersPtr++) {
	   *numbersPtr = i;
	}

	// loop through count
	for (int i = 0; i < count; i++) {
		scanf("%d", &target);
		removeTarget(&numbers[0], num, target);
	}

	numbersPtr = &numbers[0];

	// print elements in numbers using numberPtr
	for (numbersPtr = &numbers[0]; numbersPtr < &numbers[num]; numbersPtr++) {
	    printf("%d ", *numbersPtr);
	}

	puts("");
	return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target)
{ 
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) 
            break;
        if (array[i] < target)
            continue;
        
        array[i] = array[i+1];
        if (i+1 == size-1) {
            array[i+1] = 0;
            break;
        } else if (i == size-1) {
            array[i] = 0;
            break;
        }
    }
}