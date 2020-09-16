#include <stdio.h>
#define MAX_NUMS 50

int main(void)
{
    int T, cnt = 0;
	scanf("%d", &T);
	
	char word[50] = {0, };
	
	for(int i = 0; i < T; i++)
	{
		scanf("%s", &word);
		for(int j = 0; word[j] != '\0'; j++)
		{
			if(word[j] == '(')
			{
			cnt++;
			}
			else if(word[j] == ')' && cnt > 0)
			{
				cnt--;
			}
			else if(word[j] == ')' && cnt <= 0)
			{
				cnt--;
				break;
			}
		}
		if(cnt == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
	    }
    }
	
    return 0;
} 
