#include<stdio.h>
int main()
{
	int testcase;
	scanf("%d", &testcase); 
	for (int i = 0; i < testcase; i++) 
	{
		int a=0, b=0;
		scanf("%d %d", &a, &b); 
		int task = 1;
		for (int j = 0; j < b; j++) 
		{
			task = task * a % 10;  
		}
		if (task % 10 == 0) 
			printf("%d\n", 10);
		else 
			printf("%d\n", task % 10);
	}
}
