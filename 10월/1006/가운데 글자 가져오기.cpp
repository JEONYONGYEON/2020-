#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    
    int count = 0;
    const char*p = s;
    char* answer;

    while(*p++ != '\0'){
    	++count;
	}
		  
	if(count % 2 == 0)
	{
		answer = (char*)malloc(sizeof(char)*2);
		*answer = s[count/2];
		answer++;
		*answer = s[count/2 + 1];
	}
	else
	{
		answer = (char*)malloc(sizeof(char));
		*answer = s[count/ 2];
	}
	
	return answer;
}

int main(void)
{
	char* word[100] = {0, };
	scanf("%s", &word);
	
	printf("%s", solution(*word));
	
	return 0;
}
