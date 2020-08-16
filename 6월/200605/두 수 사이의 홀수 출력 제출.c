void Solution(int a, int b)
{
	if (a > b) return;
	else if (a % 2 != 0)
	{
		printf("%d ", a);
	}
	Solution(++a, b);
 }
 
 int main(void)
 {
 	int x, y;
 	scanf("%d %d", &x, &y);
 	Solution(x, y);
 	
 	return 0;
 }
