#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int *ptr = grade;
    int sum = 0;
    double average;

    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = ", i);

        if (scanf("%d", &grade[i]) != 1)
        {
            return 1;
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = %d\n", i, *(ptr + i));
        sum = sum + *(ptr + i);
    }

    average = sum / 5.0;

    printf("Average = %.2f\n", average);

    return 0;
}