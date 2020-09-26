#include <stdio.h>

int main(void)
{
	int x, y, w, h;
	int arr[4];
	
	scanf("%d %d %d %d", &x, &y, &w, &h);
	arr[0] = x;
	arr[1] = w - x;
	arr[2] = y;
	arr[3] = h - y;
	
	int min = arr[0];
	for(int i = 0; i < 3; i++)
	{
		if(arr[i + 1] < min)
		{
			min = arr[i + 1];
		}
	}
	printf("%d", min);
	
	return 0;
}
