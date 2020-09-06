#include <stdio.h>

int main(void)
{
	char word[101] = {0,};
	scanf("%s", &word); 
	
	for(int j = 0; word[j] != '\0'; j++)
	{
		printf("%c", word[j]);
		if(j % 10 == 9)
		{
			printf("\n");
		}
	}
	
	return 0;
}
