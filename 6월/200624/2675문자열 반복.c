/*
문자열 반복
s를 입력, R번 반복, 새 문자열 P 만들어 출력 
*/

#include <stdio.h>

int main(void)
{
	int T, i, R, j;
	char S[21];
	
	for(i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);
	}
	
	for(j = 0; j < R; j++)
	{
		printf("%c", S[j]);
	}
	
	return 0;
 } 
