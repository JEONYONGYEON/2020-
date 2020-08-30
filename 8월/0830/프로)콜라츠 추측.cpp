#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long int num) {
    int answer = 0;
    
    while(num != 1)
    {
    	if(num % 2 == 0)
        {
        	num /= 2;
    	    answer++;
    	}
    	else
    	{
    		num *= 3;
    		num += 1;
	    	answer++;
    	}
    	if(answer == 500)
    	return -1;
   	}
    return answer;
}

int main(void)
{
	long long int num;
	scanf("%lld", &num);
	printf("%d", solution(num));
	
	return 0;
}

