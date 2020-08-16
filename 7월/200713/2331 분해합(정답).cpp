#include <iostream>

void rec(int i, int count, int num[]) {
	int m_i = i;
	if (count == 0) {
		num[count] = i % 10;
		return;
	}

	int a = 1;
	for (int j = 0; j < count; j++) {
		a = a * 10;
	}
	
	num[count] = i / a;
	m_i = m_i % a;
	rec(m_i, --count, num);
}

int main()
{
	int N = 0;
	scanf("%d", &N);

	for (int i = 0; i <= N+1; i++) {
		int num[7] = { 0, };
		rec(i, 6, num);
		int result = i;
		for (int j = 0; j < 7; j++) {
			//printf("%d ", num[j]);
			result += num[j];
		}
		if (result == N) {
			printf("%d", i);
			break;
		}
		if (i == N) {
			printf("0");
		}
	}
}
