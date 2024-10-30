#include<stdio.h>
#include<stdlib.h>
#define size 10
int front,rear;
int queue[size];
void main()
{
void insertq(int);
int deleteq();
int searchq(int);
int opt,data,tfront;
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
case 1 :printf("Data :");
       scanf("%d",&data);
       insertq(data);
       break;
case 2 :printf("Deleted data is %d \n",deleteq());
       break;      
case 3 :printf("searche data :");
       scanf("%d",&data);
       if(searchq(data))
       printf(" found \n");
       else
       printf(" not found \n");
       break;
case 4 :exit(0);
}
}
while(1);
}

//function to insert an item
void insertq(int item)
{
int trear = rear;
trear = (trear+1)%size;
if(trear==front)
printf("queue is full \n");
else
{
rear=trear;
queue[++rear]=item;
}return;
}

//function to delete an item
int deleteq()
{
if(front==rear)
printf("queue is empty \n");
else
{
front=(front+1)%size;
return queue[++front];
}
}

//
int searchq(int item)
{
int tfront;
tfront=(front+1)%size;
while(tfront!=rear && queue[tfront]!=item)
tfront=(tfront+1)%size;
if(queue[tfront]==item)
return 1;
else
return 0;
}
