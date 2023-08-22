#include<stdio.h>
int main(void)
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int a, b;
	a = w - x;
	b = h - y;

	int arr[4] = {x,y,a,b};
	
	/*arr[0] = x;
	arr[1] = y;
	arr[2] = a;
	arr[3] = b;*/

	int min = arr[0];

	for (int i = 0; i < 4; i++)
	{
		if (min > arr[i]) min = arr[i];
	}

	printf("%d", min);
	return 0;
}
