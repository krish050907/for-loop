#include<stdio.h>
int main()
{
int i,j,k;
printf("enter the first number");
scanf("%d",&i);
printf("enter the second number");
scanf("%d",&j);
printf("enter the third number");
scanf("%d",&k);
if(i>j&&i>k)
{
   printf("largest number=%d",i);
}
if(i<j&&j>k)
{
    printf("largest number=%d",j);
}
if(k>i&&k>j)
{
    printf("largest number=%d",k);
}
if(i<k&&i<j)
{
    printf("smallest number=%d",i);
}
if(j<k&&i>j)
{
    printf("smallest number=%d",j);
}
if(i>k&&k<j)
{
    printf("smallest number=%d",k);
}



return 0;
}
