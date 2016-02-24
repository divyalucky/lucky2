#include<stdio.h>
#include<string.h>
main()
{
int n,reverse=0;
printf("enter reverse of string:");
scanf("%d",&n);
while(n!=0)
{
reverse=reverse+10;
reverse=reverse+n/10;
n=n/10;
}
printf("reverse the entered number is=%d\n",reverse);
return 0;
}

