/*
    LAB EXAM:
    Question number: 01

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 16/02/2024
*/

#include <stdio.h>

int main()
{
    float PI = 3.14;
    float r, h, SA, V;

    printf("Enter the radius of the cylinder:\n");
    scanf("%f", &r);
    printf("Enter the height of the cylinder:\n");
    scanf("%f", &h);

    V = PI * r * r * h;
    SA = 2 * PI * r * (r + h);

    printf("\nFor the cylinder of radius '%.2f' and height '%.2f':\n\n", r, h);

    printf("The surface area of the cylinder is %.2f\n", SA);
    printf("The volume of the cylinder is %.2f\n", V);
    return 0;
}
