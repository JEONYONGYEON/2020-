#include <stdio.h>
#define LINE_LENGTH (51)

int main(void)
{
	int i, C;
	scanf("%d", &C);
	char name[LINE_LENGTH];
	
	for(i = 0; i < C; i++)
    {
    	fgets(name, LINE_LENGTH, stdin);
    	printf("Hello, %s!\n", name);
	}
	
	return 0;
}

/*
���ڿ� 5���� ���� �޾� �����ؾ���
���ڿ� �����ϴ°� ���� ���� ������ 
*/

