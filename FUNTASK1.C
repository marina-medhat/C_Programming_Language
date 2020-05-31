#include <stdio.h>
#include <conio.h>

#define null 0
#define up 72
#define down 80
#define enter 13
#define esc 27
#define hl 0x70
#define normal 0x07

void print(int pos);
void newemp(int c);
void display(int c);
void search(int id,int c);
void edit(int ide,int c);

struct employee
{
int id;
char name[10];
char address[10];

};

struct employee e[5];

void main(void)
{
int counter=0;
//struct employee e[5];
char key;
int termination=0;
int pos=0;
int ids;
int iddd;


do
{
clrscr();
print(pos);
key=getch();

    switch(key)
    {
      case null:
	 key=getch();
	 switch(key)
	 {
	    case up:
	      pos--;
	      if(pos<0)
		pos=4;
	      print(pos);
	      break;

	    case down:
	      pos++;
	      if(pos>4)
		pos=0;
	      print(pos);
	      break;
	 }
	 break;

	 case enter:
	    switch(pos)
	    {
	     case 0:
	       clrscr();
	       printf("plz enter data of an employee");
	       printf("\n");
	       newemp(counter);
	       counter++;
	       getch();
	       break;

	     case 1:
	       clrscr();
	       printf("the data is :");
	       printf("\n");
	       display(counter);
	       getch();
	       break;

	     case 2:
		clrscr();
		printf("plz enter an id :");
		flushall();
		scanf("%id",&ids);
		search(ids,counter);
		break;

	     case 4:
		clrscr();
		printf("enter employee id to edit the data .. id :");
		scanf("%d",&iddd);
		edit(iddd,counter);
		break;


	     case 3:
	       termination=1;
	       break;
	    }
	    break;

	    case esc:
	      termination=1;
	      break;
    }

}while(!termination);

}


void print(int pos)
{
int col=4,row=1,i;

char menu[5][10]={"new","display","enterID","exit","edit"};

for(i=0;i<5;i++)
{
gotoxy(col,(row+i));
if(i==pos)
  textattr(hl);
cprintf("%s",menu[i]);
textattr(normal);

}

}

void newemp(int c)
{

int chid;
int term=0;
int a;
  printf("plz enter name of employee :");
  gets(e[c].name);
  printf("\n");
  if(c==0)
  {
  printf("plz enter id of employee :");
  scanf("%d",&e[c].id);
  }
  else
  {
     do
     {
      printf("plz enter id of employee :");
      scanf("%d",&chid);


      for(a=0;a<c;a++)
      {
	if(chid==e[a].id)
	{
	printf("this id is already exist !,, enter another one ");
	printf("\n");
	break;
	}

      }
      if(a==c)
      {
      e[c].id=chid;
      term=1;
      }

     }while(!term);


  }
  printf("\n");
  printf("plz enter address of employee :");
  flushall();
  gets(e[c].address);

}

void display(int c)
{
int j;
for(j=0;j<c;j++)
{
printf("the data of employee number %d ",j+1);
printf("\n");
puts(e[j].name);
printf("%d",e[j].id);
printf("\n");
puts(e[j].address);
}

}


void search(int id,int c)
{
int j;
for(j=0;j<=c;j++)
{
if(id==e[j].id)
{
printf("the data of id = %d",id ,"is");
printf("\n");
puts(e[j].name);
printf("%d",e[j].id);
printf("\n");
puts(e[j].address);
getch();
}
/*if(id>c && id!=j)
{
printf("not found");
} */
}

}

void edit(int ide,int c)
{
int b;
char nam[10];
char addrs[10];
printf("plz enter the new name :");
flushall();
gets(nam);


printf("\n");
printf("plz enter the new address :");
gets(addrs);

for(b=0;b<c;b++)
{
if(e[b].id==ide)
{
strcpy(e[b].name,nam);
strcpy(e[b].address,addrs);

}

}



}