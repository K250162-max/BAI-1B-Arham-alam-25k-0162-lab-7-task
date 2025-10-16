#include <stdio.h>

int main() {
    int numbers[10];
    int i, max, min, difference;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    min = numbers[0];

   
    for (i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

  
    difference = max - min;

    printf("Difference between max and min: %d\n", difference);

    return 0;
}

