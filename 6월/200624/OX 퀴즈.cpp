/*
OX 퀴즈 
문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수
입력 : 테스트 케이스의 개수 T, 길이 0보다 크고 80보다 작은 문자열 
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	int T;
	char OX[81];
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++)
	{
		int cnt = 1;
		int sum = 0;
		
		scanf("%s", OX);
		
		for(int j = 0; OX[j] != '\0'; j++)
	    {
		    if(OX[j] == 'O')
		    {
			    sum += cnt;
			    cnt++;
		    }
		    
		    else if(OX[j] == 'X')
		    {
		    	cnt = 1;
		    }
		}
		printf("%d\n", sum);
	}	
	return 0;
}
