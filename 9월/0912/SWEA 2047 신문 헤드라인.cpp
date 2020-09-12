#include <stdio.h>

int main(void)
{
	char word[81];
	scanf("%s", &word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		if(word[i] >= 97 && word[i] <= 123)
		{
			word[i] &= ~32;
		}
		printf("%c", word[i]);
	}
	
	return 0;
}
