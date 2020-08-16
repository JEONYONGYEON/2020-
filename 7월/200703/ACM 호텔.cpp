/*
ACM 호텔
T - 테스트 데이터
H W N
cnt
N번째 손님에게 배정되어야 하는 방 번호를 출력
 
N / H 로 나누면 W값을 구할 수 있음
N / H  1 -> W
N % H = H

HHWW
*/
#include <stdio.h> 

int main(void)
{
	int T, H, W, N;
	scanf("%d", &T);
	
	for(int test_case = 0; test_case < T; test_case++)
	{
		scanf("%d %d %d", &H, &W, &N);
		if(N % H == 0)
		{
			printf("%d", H);
			printf("%02d\n", N/H);
		}
		else
		{
			printf("%d", N%H);
			printf("%02d\n", N/H+1);
		}
	}
	return 0;
}
