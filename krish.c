#include<stdio.h>
int main()
{
int i,j;
printf("enter the first number");
scanf("%d",&i);
printf("enter the second number");
scanf("%d",&j);
if(i>j)
{
   printf("largest number=%d",i);
}
else
    printf("smallest number=%d",i);
if (i<j)
{
    printf("largest number=%d",j);
}
else
    printf("smallest number=%d",j);



return 0;
}
