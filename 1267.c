#include<stdio.h>
#include<stdlib.h>

int Y_result(int arr[], int t);
int M_result(int arr[], int t);

int main(void)
{
	int t;
	scanf("%d", &t);

	int* arr = (int*)malloc(sizeof(int) * t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &arr[i]);
	}

	int Y_value = Y_result(arr, t);
	int M_value = M_result(arr, t);

	if (Y_value < M_value) {
		printf("Y %d", Y_value);
	}
	else if (Y_value == M_value) {
		printf("Y M %d", Y_value);
	}
	else {
		printf("M %d", M_value);
	}

	free(arr);

	return 0;
}


int Y_result(int arr[], int t)
{
	int res=0;
	int a;

	for (int i = 0; i < t; i++)
	{
		a = 10 + ((arr[i] / 30) * 10);
		res += a;
	}
	
	return res;
}
int M_result(int arr[], int t)
{
	int res=0;
	int a;

	for (int i = 0; i < t; i++)
	{
		a = 15 + ((arr[i] / 60) * 15);
		res += a;
	}

	return res;
}
