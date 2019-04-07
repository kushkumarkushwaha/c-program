#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter A value=");
scanf("%d",&a);
printf("enter B value=");
scanf("%d"`,&b);
a=a+b;
b=a-b;
a=a-b;
printf("value after swaping");
printf("\n A=%d",a);
printf("\n B=%d",b);
getch();
}