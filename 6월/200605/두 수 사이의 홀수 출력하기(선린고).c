#include <stdio.h>

void recall(int i, int j)
{
	if(i > j) return;
	else if(i % 2 == 1)
	{
		printf("%d ", i);
	}
	
	recall(++i, j);
 }
 
 int main(void)
 {
 	int a, b;
 	scanf("%d %d" , &a, &b);
 	recall(a, b);
 }
 
 /*
 ���� i > j -> �Լ� �������� ����
 
 else if �Լ� ������ ��ȿ�� ����
 i �� ���� Ȧ����� ����ϰ�
 �ڱ� �ڽ� �� i���� ++�ؼ� ȣ���ϱ�
  
 
 */
