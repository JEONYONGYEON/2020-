#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
	if(a > b)
    {
    	for(int j = b; j <= a; j++)
    	{
    		answer += j;
		}
	}
    else
    {
    	for(int i = a; i <= b; i++)
        {
    		answer += i;
		}
	}
    
    return answer;
}
