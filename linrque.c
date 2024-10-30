#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int front,rear;
void main()
{
void insertq(int);
int deleteq();
int searchq(int);
int opt,data,ans,tfront;
do
{
printf("\n 1.insert \n");
printf("\n 2.delete \n");
printf("\n 3.search \n");
printf("\n 4.exit \n");
printf(" Enter your choice :");
scanf("%d",&opt);
switch(opt)
{
case 1 :printf("Enter the data :");
       scanf("%d",&data);
       insertq(data);
       break;
case 2 :data=deleteq();
       printf("Deleted elements %d",data);
       break;      
case 3 :printf("item searched :");
       scanf("%d",&data);
       ans=searchq(data);
       if(ans==1)
       printf("Elements found \n");
       else
       printf("Element not found \n");
       break;
case 4 :exit(0);
}
}
while(1);
}

//function to insert an item
void insertq(int item)
{
if(rear==size-1)
printf("queue is full \n");
else
queue[++rear]=item;
}

//function to delete an item
int deleteq()
{
if(front==rear)
{
printf("queue is empty \n");
exit(1);
}
else
{
front=(front+1)%size;
return queue[++front];
}
}

// function to search an
int searchq(int item)
{

int tfront=front+1;
while(tfront!=rear && queue[tfront]!=item)
++tfront;
if(queue[tfront]==item)
return 1;
else
return 0;
}
