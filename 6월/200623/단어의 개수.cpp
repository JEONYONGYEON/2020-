#include <stdio.h>
#define MAX 1000001 // 문장의 길이 + 1 

int main(void)
{
	char str[MAX]; // 입력받은 문자열 저장 
	int num = 1; // 단어갯수
    int i = 0;
	
	gets(str); // 띄어쓰기 포함해서 받기 위해서 gets() 사용
	
	while(str[i] != '\0'){
		if(str[i] == ' ' && str[i+1] != '\0')  // 문장 맨 뒤에 띄어쓰기 할 경우 방지 
	    {
	        num++; 
		}
		i++;
	}
	 
	 if(str[0] == '\0' || str[0] == ' ') // 아무것도 입력하지 않거나 맨 앞에 공백을 입력한 경우
	 {
	 	num--; 
	  }
	  printf("%d\n", num);
	
	return 0;
}
