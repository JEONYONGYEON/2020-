#include <stdio.h>
#include <iostream>
#include <stdbool.h>
#include <stdlib.h>

using namespace std;

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int cnt = 0;
    const char* p = s;
    
    while(*p++ != '\0'){
    	++cnt;
	}
	
	char* answer;
	 
	if(cnt % 2 == 0){
		answer = (char*)malloc(sizeof(char)*2);
		answer[0] = s[cnt/2 - 1];
		answer[1] = s[cnt/2];
	}
	else
	{
		answer = (char*)malloc(sizeof(char));
   		*answer = s[cnt/2];
	}
	
	return answer;
	free (answer);
}

int main(void)
{
	char word[101];
	cin >> word;
	cout << solution(word);
	
	return 0;
}
