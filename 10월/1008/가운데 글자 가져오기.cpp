#include <stdio.h>
#include <iostream>
#include <stdbool.h>
#include <stdlib.h>

using namespace std;

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    
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
