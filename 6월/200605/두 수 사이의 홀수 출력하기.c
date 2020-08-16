int solution(int a, int b)
{
	if(b % 2 == 0)
	{
		printf("%d", b - 1);
		return f(a, b - 2);
	}
}

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	solution(x, y);
	
	return 0;
 } 
