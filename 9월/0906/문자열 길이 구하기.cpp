#include <stdio.h>

int get_string_length(const char* str)
{
	int count = 0;
	const char* p = str;
	
	while(*p++ != '\0'){
		++count;
	}
	
	return count;
}

int main(void)
{
	char word[100] = {0,};
	scanf("%s", &word);
	printf("%d", get_string_length(word));
	
	return 0;
}
