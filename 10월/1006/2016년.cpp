#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int cnt = 0;
    
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* day[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    for(int i = 0; i < a - 1; i++)
    {
    	cnt += month[i];
	}
	
	cnt += b - 1;
    
    char* answer = (char*)malloc(4);
    answer = day[cnt % 7];
    
	return answer;
}

int main(void)
{
	int Month, Day;
	scanf("%d %d", &Month, &Day);
	printf("%s", solution(Month, Day));
	
	return 0;
}


