#include<stdio.h>
int readArray(int []);
void printArray(int [],int);
int linear(int [],int);
void main()
{
int A[100],n,res;
n=readArray(A);
printf("\n *********** \n");
printArray(A,n);
res = linear(A,n);
if(res == -1)
	printf("\n Unsucessful");
else
printf("\n Succesful at %d index",res);
}
int readArray(int x[])
{
int n;
scanf("%d",&n);
printf("\n Enter %d no of elements",n);
for(int i = 0; i<n;i++)
	scanf("%d",&x[i]);
return n;
}
void printArray(int x[],int n)
{
for(int i=0;i<n;i++)
printf("%5d",x[i]);
}
int linear(int x[],int n)
{
int k,i;
printf("\n Give the search element");

scanf("%d",&k);
for(i=0;i<n;i++)
	if(x[i] == k)
	  return i;
return -1;
}