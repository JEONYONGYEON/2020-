#include <stdio.h>
#define MAX 1000001 // ������ ���� + 1 

int main(void)
{
	char str[MAX]; // �Է¹��� ���ڿ� ���� 
	int num = 1; // �ܾ��
    int i = 0;
	
	gets(str); // ���� �����ؼ� �ޱ� ���ؼ� gets() ���
	
	while(str[i] != '\0'){
		if(str[i] == ' ' && str[i+1] != '\0')  // ���� �� �ڿ� ���� �� ��� ���� 
	    {
	        num++; 
		}
		i++;
	}
	 
	 if(str[0] == '\0' || str[0] == ' ') // �ƹ��͵� �Է����� �ʰų� �� �տ� ������ �Է��� ���
	 {
	 	num--; 
	  }
	  printf("%d\n", num);
	
	return 0;
}
