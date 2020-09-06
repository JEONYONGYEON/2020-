

/* 10 부제

자동차 번호의 일의 자리 숫자와
날짜의 일의 자리 숫자가 일치하면
해당 자동차의 운행을 금지
 
입력
첫 줄에는 일의 자리 숫자가 주어지고

두 번째 줄에는
5대의 자동차 번호의 일의 자리 숫자 
*/

#include <stdio.h>

int main(void)
{
	int day, cnt = 0;
	int Carnum[5];
	
	scanf("%d", &day);
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &Carnum[i]);
		if(day == Carnum[i])
		{
			cnt++;
		}
	}
	
	printf("%d", cnt);
	return 0;
 } 
