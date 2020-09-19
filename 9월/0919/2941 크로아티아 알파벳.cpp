#include <stdio.h>

int main(void)
{
	char word[101] = {0, };
	int cnt = 0;
	scanf("%s", &word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		if(word[i] == 'c' && word[i + 1] == '=' || word[i] == 'c' && word[i + 1] == '-')
		{
			continue;
		}
		else if(word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '='
		|| word[i] == 'd' && word[i + 1] == '-')
		{
			continue;
		}
		else if(word[i] == 'l' && word[i + 1] == 'j')
		{
			continue;
		}
		else if(word[i] == 'n' && word[i + 1] == 'j')
		{
			continue;
		}
		else if(word[i] == 's' && word[i + 1] == '=')
		{
			continue;
		}
		else if(word[i] == 'z' && word[i + 1] == '=')
		{
			continue;
		}
    cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}

