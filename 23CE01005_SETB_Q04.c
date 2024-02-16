/*
    LAB EXAM
    Question number: 04

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 16/02/2024
*/

#include <stdio.h>

int compChecker(int num) // Checks if composite or not
{
    int comp = 0; // flag

    for (int div = 2; div < num; div++)
    {
        if (num % div == 0)
        {
            comp = 1;
            break;
        }
    }
    return (comp);
}

int main()
{
    int n, a, b; // a and b are the numbers into which number is broken

    printf("Enter the number:\n");
    scanf("%d", &n);

    int limit = (n % 2 == 0) ? (n / 2 - 1) : (n / 2);

    int found = 0; // Tells if composite number is found

    for (a = 1; a <= limit; a++)
    {
        b = n - a; // Another number

        if ((compChecker(a)) && (compChecker(b))) //Only when both are composite will this if execute
        {
            found = 1;
            printf("%d %d\n", a, b);
        }
    }

    if (found == 0) // In case no composite numbers were found
    {
        printf("%d cannot be written as the sum of two composite numbers.\n", n);
    }

    return 0;
}
