/*숫자의 합
N개의 숫자가 공백 없이 쓰여있다.
숫자를 모두 합해서 출력하는 프로그램을 작성하라.
입력 : 숫자의 개수 N, 둘째 줄에 숫자 N개
출력 ㅣ 숫자 N개의 합  
*/

#include <stdio.h>

int main(void)
{
	int N, sum = 0;
	char num[101]; 
	
	scanf("%d", &N);
    scanf("%s", num);
	
	for(int i = 0; i < N; i++)
	{
		sum += num[i] - '0';
	} 
	printf("%d", sum);
	
	return 0;
}
