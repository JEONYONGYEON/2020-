/*
OX ���� 
������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ����
�Է� : �׽�Ʈ ���̽��� ���� T, ���� 0���� ũ�� 80���� ���� ���ڿ� 
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
