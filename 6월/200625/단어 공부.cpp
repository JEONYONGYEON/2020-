#include <stdio.h>
#define MAX 1000001

int main(int argc, char* argv[]){
	char str[MAX];
	int i;
	int num[26] = {0,};    // ������ ���� ���� ����
	int max;
	int max_index = 0;
	
	scanf("%s", str);
	
	// 'A'�� �ƽ�Ű�ڵ� 65, 'a'�� �ƽ�Ű�ڵ� 97
	for(i = 0; str[i] != '\0'; i++){
		// �빮���� ��� �ҹ��ڷ� �ٲ���
	    if(str[i] < 97)
		{
			str[i] += 32;
		}		
		num[str[i]-97]++;  // ��Ÿ�� ���� ���� ���� 
	}
	
	max = num[0];
	// ���� ū �� ã�Ƽ� �ε��� ����
	for(i = 1; i < 26; i++) {
		if(max < num[i]){
		max = num[i];
		max_index = i;
        } // num[i] != 0 �� ������ ���� ���ڵ��� �˻��� ��� ����(���� ��� �� ���� �Է�)
	    else if(max == num[i] && num[i] != 0){
	    	max_index = -1;
		}	
	}  
	 // �׿� �ش��ϴ� ���� ���
	 // ���� ���� ���� ���ĺ��� �������� ���� ��� x
	 if(max_index != -1)
	 {
	 	printf("%c", 65+max_index);    // 65�� 'A'�� �ƽ�Ű�ڵ� 
	  }
	  else
	  {
	  	printf("?\n");  // Ȯ���ؼ� �Ȱ��� ���� 2�������� ? ��� 
	  }
}
