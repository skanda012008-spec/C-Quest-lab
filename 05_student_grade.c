#include <stdio.h>

int main()
{
    int marks[5], total = 0;
    float average;
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    average = total / 5.0;
    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);
    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 75)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    return 0;
}
