#include<stdio.h>

int main()

{

	int C; // �׽�Ʈ ���̽��� ����

	int N; // �л��� ��

	scanf("%d",&C); // �׽�Ʈ ���̽� �Է� 

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
