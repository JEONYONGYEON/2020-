#include <stdio.h>

void recall(int i, int j)
{
	if(i > j) return;
	else if(i % 2 == 1)
	{
		printf("%d ", i);
	}
	
	recall(++i, j);
 }
 
 int main(void)
 {
 	int a, b;
 	scanf("%d %d" , &a, &b);
 	recall(a, b);
 }
 
 /*
 만약 i > j -> 함수 종료조건 설정
 
 else if 함수 조건이 유효한 동안
 i 가 만약 홀수라면 출력하고
 자기 자신 중 i값을 ++해서 호출하기
  
 
 */
