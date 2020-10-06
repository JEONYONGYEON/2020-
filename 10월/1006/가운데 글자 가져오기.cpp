#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
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
