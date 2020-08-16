#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

// 1 <= a <= b <= 1,000,000

int main(void){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	// �ִ�ġ ũ�⸸ŭ �����Ҵ��� �մϴ�
	bool* arr = new bool[b + 1];
	
	// �迭�� true�� �ʱ�ȭ�մϴ�.
	for(int i = 0; i< b+1; i++){
		arr[i] = true;
	}
	
	int j;  // ������ ���� ���� ����
	
    for(int i = 2; i < b+1; i++){
    	
    	if(arr[i]){    // true �̸� 
    		
    		if((unsigned int)pow(i, 2) > 1000001){
    			// ������ ������ ������ for���� ���ɴϴ�.
				break; 
			}else{
				// �̹� �ִ� �Ҽ����� ������� �����ݴϴ�.
				for(j = (int)pow(i, 2); j < b+1;){
					arr[j] = false; // �Ҽ��� �ƴ� ������ false�� �ٲ��� 
			        j += i;	
				} 
			}
			
		}
	} 
	
	// 1�� ��츦 �����ؾ��ϹǷ� a�� 1 �� ������ ��, 2�� ������ݴϴ�
	if(a == 1) a++;
	
	// true �̸鼭, a���� ū ������ ���!
	for(int i = a; i < b+1; i++){
		if(arr[i] && i >= a) printf("%d\n", i);
	} 
	
	delete []arr;    // �����Ҵ� ����
	return 0; 
}
