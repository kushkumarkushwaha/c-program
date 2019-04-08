#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,n;
clrscr();
printf("enter the number");
scanf("%d",&num);
n=1;
for(i=2;i<=num;i++)
{
if(num%i==0)
{
n=0;
break;
}
}
if(n)
printf("prime number");
else
printf("composite number");
getch();
}