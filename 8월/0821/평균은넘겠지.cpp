#include<stdio.h>

int main()

{

	int C; // 테스트 케이스의 개수

	int N; // 학생의 수

	scanf("%d",&C); // 테스트 케이스 입력 

	for(int i=0;i<C;i++)

	{

		int A[1000];

		int sum=0;

		double average=0.0; 

		scanf("%d",&N);

		for(int i=0;i<N;i++)

		{

			scanf("%d",&A[i]);

			sum+=A[i];

		}

		average = (double)sum / N;

		int count = 0;

		for(int i=0;i<N;i++)

		{

			if(average<A[i]) count++;

		}

		printf("%.3lf%%\n",(double)count*100/N);

	}

	return 0;

}
