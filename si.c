/*
This program is to calculate SI 
*/
#include <stdio.h>
int main()
{
    float p, r, t, SI;
    printf("Enter Principal amount : \n");
    scanf("%f", &p);
    printf("Enter rate of interest : \n");
    scanf("%f", &r);
    printf("Enter the time period : \n");   
    scanf("%f", &t); 
/*
My mistake is to not declare the SI variable before using it
*/ 
    SI = (p*r*t)/100
    printf("The simple interest is : %f \n", SI);
    return 0;
}
