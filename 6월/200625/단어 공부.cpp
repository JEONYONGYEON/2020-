#include <stdio.h>
#define MAX 1000001

int main(int argc, char* argv[]){
	char str[MAX];
	int i;
	int num[26] = {0,};    // 등장한 문자 개수 저장
	int max;
	int max_index = 0;
	
	scanf("%s", str);
	
	// 'A'는 아스키코드 65, 'a'는 아스키코드 97
	for(i = 0; str[i] != '\0'; i++){
		// 대문자일 경우 소문자로 바꿔줌
	    if(str[i] < 97)
		{
			str[i] += 32;
		}		
		num[str[i]-97]++;  // 나타난 문자 개수 증가 
	}
	
	max = num[0];
	// 제일 큰 수 찾아서 인덱스 저장
	for(i = 1; i < 26; i++) {
		if(max < num[i]){
		max = num[i];
		max_index = i;
        } // num[i] != 0 은 나오지 않은 숫자들이 검색될 경우 방지(예를 들어 한 글자 입력)
	    else if(max == num[i] && num[i] != 0){
	    	max_index = -1;
		}	
	}  
	 // 그에 해당하는 문자 출력
	 // 가장 많이 사용된 알파벳이 여러개일 경우는 출력 x
	 if(max_index != -1)
	 {
	 	printf("%c", 65+max_index);    // 65는 'A'의 아스키코드 
	  }
	  else
	  {
	  	printf("?\n");  // 확인해서 똑같은 수가 2개있으면 ? 출력 
	  }
}
