#include <stdio.h>
#define NAME_LEN 1024

int main(int argc, char** argv)
{
	int i;
	int count;
	char name[NAME_LEN] = {0, };
	
	/* scanf doesn't include '\n' */
	scanf("%d", &count);
	for(i = 0; i < count;i++)
	{
		scanf("%s", name);
		printf("Hello, %s!\n", name);
	}
	
	return 0; 
}






/*
1) �Լ� ����

(��ȯ) int 
(����) int argc, char** argv

2) ���� count = 0, name[NAME_LEN] = {0, } 
���� count = 0, name�迭�� ��� 0 �ʱ�ȭ
 


*/ 
