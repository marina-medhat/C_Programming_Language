#include <stdio.h>
#include <conio.h>

int pow(int base , int power);

void main(void)
{
int b,p,result;
clrscr();
printf("plz enter the base :");
scanf("%d",&b);
printf("\n");
printf("plz enter the power :");
scanf("%d",&p);

result=pow(b,p);

printf("the result is : %d",result);
getch();
}

int pow(int base,int power)
{
if(power==1)
 return base;
else
 return pow(base,power-1)*pow(base,1);

}