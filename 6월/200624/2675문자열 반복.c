/*
���ڿ� �ݺ�
s�� �Է�, R�� �ݺ�, �� ���ڿ� P ����� ��� 
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
