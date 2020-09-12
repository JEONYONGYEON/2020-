#include <stdio.h>

int main(void)
{
	char word[201];
	scanf("%s", &word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		printf("%d ", word[i] - 64);
	}
	
	return 0;
 } 
