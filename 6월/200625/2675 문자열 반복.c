//2675 ���ڿ� �ݺ�

#include <stdio.h>

int main(void)
{
	int T;          // �׽�Ʈ ���̽�
	int num;        // �ݺ� Ƚ���� ������ ����
	char S[21] = {0, };   // ���ڿ� ����
	int i, j, k;
	
	scanf("%d", &T);       //  �׽�Ʈ ���̽� �Է�
	
	for(int i = 0; i < T; i++){     // �׽�Ʈ ���̽���ŭ �ݺ� 
		scanf("%d %s", &num, S);    // �ݺ�Ƚ���� ���ڿ� �Է�
		
		for(int j = 0; S[j] != '\0'; j++){ // ���ڿ��� ������ ������ ������ Ž��
		for(k = 0; k < num;k++)     // �ݺ�Ƚ����ŭ ��� 
			printf("%c", S[j]);
		}
		printf("\n");
	} 
	
	return 0;
 } 
