#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	char word[51] = {0, };
	
	for(int test_case = 0; test_case < T; test_case++)
	{
		scanf("%s", &word);
		int cnt = 0;
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
