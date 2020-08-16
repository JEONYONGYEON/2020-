/*
문자열 S를 입력받고
각 문자를 R번 반복해
새 문자열 P를 만든 후 출력
 
*/

#include <stdio.h>

int main(void)
{
	int T;
	char S[21];
	scanf("%d", &T);
	
	for(int test_case = 1; test_case <= T; test_case++) 
	{
		int R;
		scanf("%d %s", &R, S);
		for(int i = 0; S[i] != '\0'; i++)
		{
			for(int k = 0; k < R; k++)
			{
				printf("%c", S[i]);
			} 
		}
		printf("\n");
	}
	
	return 0;
}
