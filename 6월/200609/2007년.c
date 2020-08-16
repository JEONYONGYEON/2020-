#include <stdio.h>

int main(void)
{
	int x, y, i, cnt = 0;
	
    char* Day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	scanf("%d %d", &x, &y);
	
	for(i = 0; i < x - 1; i++)
	{
		cnt += Month[i];
	}
	
	cnt += y - 1;
	printf("%s", Day[cnt % 7]);
		
	return 0;
}

/*
cnt를 0으로 초기화 하지 않아서 틀림... 
*/
