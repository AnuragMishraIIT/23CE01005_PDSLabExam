/*  
    LAB EXAM 
    Question number: 03

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 16/02/2024
*/

#include <stdio.h>

int main()
{
    double x,y,x1,y1,r,E; //Variables according to question

    printf("Enter the x and y coordinates of the 'centre' of the circle:\n");
    scanf("%lf %lf",&x,&y);
    printf("Enter the radius of the circle:\n");
    scanf("%lf",&r);
    printf("Enter the x and y coordinates of the 'point':\n");
    scanf("%lf %lf",&x1,&y1);
    
    E=(x1-x)*(x1-x)+(y1-y)*(y1-y)-r*r; //Expression that is square of distance between point and the centre minus square of the radius

    printf("\nFor the circle with centre (%lf,%lf) and radius %lf:\n",x,y,r);

    if(E>0)
    {
        printf("The coordinate (%lf,%lf) lies 'Outside' the circle",x1,y1);
    }
    else if(E<0)
    {
        printf("The coordinate (%lf,%lf) lies 'Inside' the circle",x1,y1);
    }
    else
    {
        printf("The coordinate (%lf,%lf) lies 'On' the circle",x1,y1);
    }
    return 0;
}