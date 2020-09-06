#include <iostream>

using namespace std;

int main(void)
{
	char word[101] = { 0, };
	scanf("%s", &word);
	const char* p = word;

	int cnt = 0;

	while (*p != '\0')
	{
		printf("%c", *p);
		cnt++;
		*p++;
		if (cnt % 10 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}
