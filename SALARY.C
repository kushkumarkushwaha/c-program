#include<stdio.h>
#include<conio.h>
void main()
{
long int salary,hra,da,pf,netsalary;
clrscr();
printf("enter user salary\n");
scanf("%l
d",&salary);
hra=(salary*5)/100;
da=(salary*10)/100;
pf=(salary*12)/100;
netsalary=(salary+hra+da)-pf;
printf("hra=%ld\n",hra);
printf("da=%ld\n",da);
printf("pf=%ld\n",da);
printf("net salary=%ld\n",netsalary);
getch();
}