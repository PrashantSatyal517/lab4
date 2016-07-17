/* to implement binary search using recurssion
*  Author:Prashant Satyal
*  Reference:Data structures using c&c++ (pearson) page :132 133 134
*/
#include<stdio.h>
#include<conio.h>
#define size 10
int binsrch(int[],int,int,int);
int main()

{
	int a[size]={11,22,33,44,55,66,77,88};   //sorted items in array
	int num,i=0,high,low;                    //declaring lower and upper bound of  array a
	printf("enter the no you want to search\n");
	scanf("%d",&num);
	
	i=binsrch(a,num,0,size-1);  
	             
	if(i==-1)
	printf("The no is not in array");
	
	else 
	printf("it is in array");
}

int binsrch(int a[],int num,int low,int high)
{
	int mid;
	if(low>high)
	return(-1);
	
	mid=((low+high)/2);
	return(num==a[mid]? mid:num<a[mid]? binsrch(a,num,low,mid-1):binsrch(a,num,mid+1,high));
}
