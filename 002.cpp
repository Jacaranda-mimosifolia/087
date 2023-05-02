#include<stdio.h>
#include<stdlib.h>
int x=10,y=1;

int demo_1(int x,int y);//the function prototype
int demo_2(int x,int y);//the function prototype

int main()//the main function
{
	int x=10;
	demo_1(x,y);
	return 0;
}

int demo_1(int x,int y)//the add function,function definition
{
	y*=x;
	if(x!=1)
	{printf("x=%d,y=%d\n",x,y);
		demo_2(x,y);
		
	}
	else
	{
		printf("sum=%d\n",y);
		return y;
	}
}

int demo_2(int x,int y)//the add function,function definition
{
	x-=1;
	demo_1(x,y);
}
