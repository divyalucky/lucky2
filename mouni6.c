#include<stdio.h>
int main()
{
int x,y,temp;
printf("enter the value of x,y and y/n");
scanf("%d%d",&x,&y);
printf("before swaping \n x=%d \n y=%d \n",x,y);
temp=x;
x=y;
y=temp;
printf("after swaping \n x=%d\n y=%d\n",x,y);
return 0;
}
