/* To find factorial of a no using recurssion.
*  Author: prashant satyal
*  Reference:Data structure using c and c++ (pearson) pg 127
*/

#include<stdio.h>
#include<conio.h>

int fact(int);

int main()


{
	int num;
   	int facto;
	printf("provide the no you want to find factorial of: \n");
	scanf("%d",&num);
	facto =fact(num);
    printf("the result is %d",facto);
}


int fact (int num)
{
    int x,y;
   //printf("%d",num);   //to keep track of nos.
	if(num==0)
	return 1;
	
	
	 x=num-1;
	 y=fact(x);         //fnx calling itself.
	return(num*y);
    
	
}
