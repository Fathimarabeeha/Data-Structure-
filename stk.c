#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int sp=-1;

void main()
{
int option,data;
void push(int);
int pop();
void display();
do
{
printf("\n1.push \n");
printf("2.pop \n");
printf("3.disply \n");
printf("4.exit \n");
printf("your choice");
scanf("%d",&option);
switch(option)
{
case 1:printf("data :");
       scanf("%d",&data);
       push(data);
       break;
case 2:data=pop();
       printf("poped item %d",data);
       break;
case 3:display();
       break;
case 4:exit(0);
}
}
while(1);
} 

//insert the function of an item
void push(int data)
{
if(sp==size-1)
printf("full stack");
else
stack[++sp]=data;
}

//delete the function of an item
int pop()
{
if(sp==-1)
{printf("empty stack");exit(0);}
else
return stack [sp--];
}

//display the function of an item
void display()
{
int tsp=sp;
printf("stack contants :\n");
while(tsp!=-1)
{
printf("%d,",stack[tsp]);
tsp--;
}
}
