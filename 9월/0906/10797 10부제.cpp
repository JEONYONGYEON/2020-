

/* 10 ����

�ڵ��� ��ȣ�� ���� �ڸ� ���ڿ�
��¥�� ���� �ڸ� ���ڰ� ��ġ�ϸ�
�ش� �ڵ����� ������ ����
 
�Է�
ù �ٿ��� ���� �ڸ� ���ڰ� �־�����

�� ��° �ٿ���
5���� �ڵ��� ��ȣ�� ���� �ڸ� ���� 
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
