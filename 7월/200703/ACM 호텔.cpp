/*
ACM ȣ��
T - �׽�Ʈ ������
H W N
cnt
N��° �մԿ��� �����Ǿ�� �ϴ� �� ��ȣ�� ���
 
N / H �� ������ W���� ���� �� ����
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
