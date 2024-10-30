#include<stdio.h>
void main()
{
int ar1[20],ar2[20],ar3[40];
int n1,n2;
void read_array(int[],int);
void print_array(int[],int);
void sort_array(int[],int);
void merge_array(int[],int,int[],int,int[]);
printf("numbers of elements in 1st array [1-20] :");
scanf("%d",&n1);
printf("enter %d elements :",n1);
read_array(ar1,n1);
printf("numbers of elements in 2nd array[1-20] :");
scanf("%d",&n2);
printf("enter %d numbers :",n2);
read_array(ar2,n2);
sort_array(ar1,n1);
sort_array(ar2,n2);
merge_array(ar1,n1,ar2,n2,ar3);
printf("\n sorted 1st array :\n");
print_array(ar1,n1);
printf("\n sorted 2nd array :\n");
print_array(ar2,n2);
printf("\n merged array :\n");
print_array(ar3,n1+n2);
}
void read_array(int a[],int n)
{
int i;
for(i=0;i<n;++i)
scanf("%d",&a[i]);
return;
}
void print_array(int a[],int n)
{
int i;
for(i=0;i<n;++i)
printf("%d ,",a[i]);
return;
}
void sort_array(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;++i)
for(j=i+1;j<n;++j)
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
return;
}
void merge_array(int a[],int n1,int b[],int n2,int c[])
{
int i,j,k;
i=j=k=0;
while(i<n1 && j<n2)
if(a[i]<b[j])
c[k++]=a[i++];
else
c[k++]=b[j++];
while(i<n1)
c[k++]=a[i++];
while(j<n2)
c[k++]=b[j++];
}

