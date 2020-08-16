//2675 문자열 반복

#include <stdio.h>

int main(void)
{
	int T;          // 테스트 케이스
	int num;        // 반복 횟수를 저장할 변수
	char S[21] = {0, };   // 문자열 저장
	int i, j, k;
	
	scanf("%d", &T);       //  테스트 케이스 입력
	
	for(int i = 0; i < T; i++){     // 테스트 케이스만큼 반복 
		scanf("%d %s", &num, S);    // 반복횟수와 문자열 입력
		
		for(int j = 0; S[j] != '\0'; j++){ // 문자열의 끝까지 도달할 때까지 탐색
		for(k = 0; k < num;k++)     // 반복횟수만큼 출력 
			printf("%c", S[j]);
		}
		printf("\n");
	} 
	
	return 0;
 } 
