#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <stdlib.h>

#define n 2


void main(void)
{
char **pptr;
int s1,s2;
int i;

clrscr();

pptr=(char **)malloc(n*(sizeof(char *)));

printf("plz enter number of charachter on name :");
flushall();
scanf("%d",&s1);
pptr[0]=(char *)malloc(s1*(sizeof(char)));

clrscr();
printf("plz enter the name :");
flushall();
scanf("%s",pptr[0]);


for(i=0;i<s1;i++)
{
printf("%c",pptr[0][i]);
printf("\n");
}



printf("plz enter size of phone :");
flushall();
scanf("%d",&s2);
pptr[0]=(char *)malloc(s2*(sizeof(char)));



printf("plz enter the phone :");
flushall();
scanf("%s",pptr[1]);


for(i=0;i<s2;i++)
{
printf("%c",pptr[1][i]);
printf("\n");
}

getch();
}