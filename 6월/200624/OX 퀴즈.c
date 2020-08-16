#include <stdio.h>

int main(void)
{
	char str[82];
	int T, sum, i, cnt;
	scanf("%d", &T);
	while(T-- != 0){
		scanf("%s", str); // string 입력받기
		sum = 0;
	    	for(i = 0, cnt = 0; str[i]; i++){
			if(str[i] == 'O') 
			{
				cnt++;
			}
			else
			{
				cnt = 0; // X가 나올 경우 
			}
			sum += cnt;
		}
		printf("%d\n", sum);
	}
	return 0;
}
