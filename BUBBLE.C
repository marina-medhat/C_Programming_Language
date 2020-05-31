#include <stdio.h>
#include <conio.h>


void main(void)
{

int arr[4]={1,-2,6,9};
int i,j;
int k;
int flag;
int temp;

clrscr();

for(j=0;j<3;j++)
{
for(i=0;i<(3-j);i++)
{
if(arr[i]>arr[i+1])
{
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
flag=1;
}
}
if(flag==1)
break;
}


for(k=0;k<4;k++)
{
printf("%d",arr[k]);
printf("\n");
}

getch();
}