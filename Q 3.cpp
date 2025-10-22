#include <stdio.h>

#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int passCount = 0, failCount = 0;
    int mark, i;
    float passSum = 0, failSum = 0;

    printf("Enter marks for students (enter -1 to stop):\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &mark);

        if (mark == -1)
            break;  // stop input

        if (mark >= 5 && mark <= 10) {
            pass[passCount] = mark;
            passSum += mark;
            passCount++;
        }
        else if (mark >= 0 && mark < 5) {
            fail[failCount] = mark;
            failSum += mark;
            failCount++;
        }
        else {
            printf("Invalid input! Enter marks between 0 and 10 ONLY.\n");
        }
    }

    printf("\nPass students marks:\n");
    for (i = 0; i < passCount; i++)
        printf("%d ", pass[i]);

    printf("\nAverage of passed students = %.2f\n", 
           passCount == 0 ? 0 : passSum / passCount);

    printf("\nFail students marks:\n");
    for (i = 0; i < failCount; i++)
        printf("%d ", fail[i]);

    printf("\nAverage of failed students = %.2f\n",
           failCount == 0 ? 0 : failSum / failCount);

    return 0;
}

