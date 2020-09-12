#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    
	bool answer = true;
	int num = 0;
    int result = x;
    
	while(x != 0)
    {
    	num += x % 10;
    	x /= 10;
	}
    
    if (result % num != 0)
    {
    	answer = false;
	}
	
    return answer;
}
