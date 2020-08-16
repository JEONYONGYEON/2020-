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
문자열 5개를 각각 받아 저장해야함
문자열 복사하는거 보고 직접 만들어보렴 
*/

