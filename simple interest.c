// program to find the simple interest
#include <stdio.h>
int main()
{
int a,t,r,interest;
printf("\n enter value of A:");
scanf("%d",&a);
printf("\n enter value of T:");
scanf("%d",&t);
printf("\n enter value of R:");
scanf("%d",&r);
interest=a*t*r/100;
printf("\n INTEREST=%d", interest);
return 0;
}