/*
    LAB EXAM
    Question number: 02

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 16/02/2024
*/

#include <stdio.h>

int main()
{
    int low, up, sum, comma;

    printf("Input lower limit:\n");
    scanf("%d", &low);

    printf("Input upper limit:\n");
    scanf("%d", &up);

    printf("Perfect numbers: ");

    for (int num = low; num <= up; num++)
    {
        sum = 0; //Otherwise the sum of the divisors of the previous number 'num' will accumulate

        for (int div = 1; div < num; div++) //div will always be less than num (the number)
        {
            if (num % div == 0) //Checking if divisor
            {
                sum = sum + div;
            }
        }

        if (sum == num) //Condition of perfect number
        {
            printf("%d, ", num);
        }
    }
    return 0;
}
