/*
���ڿ� S�� �Է¹ް�
�� ���ڸ� R�� �ݺ���
�� ���ڿ� P�� ���� �� ���
 
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
