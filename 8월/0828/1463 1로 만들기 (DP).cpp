#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class makeOne{
	private:
	    int n;    // n
    	int arr[1000001];    // array
	public:
		void setNum(){
			cin >> n;
			memset(arr, 0, sizeof(int) * (n + 1)); // 1���� n ���� �̹Ƿ� n + 1 
		}
		
		// bottom up
		// 1�� ���� ������ �����ؼ� ���� ����� ���� �̸� arr[i]�� (�ִ�)���� �޸������̼��� �մϴ�.
		// 2�� ������ ���������� 3���� ������ �������� ��쿡 �ռ� ����� arr[i/2]�� arr[i/3]�� ������ arr[i]�� �񱳸� �Ͽ�
		// �� �� �ּ� ���� arr[i]�� �ٽ� ����(�޸������̼�) �մϴ�.
		
		void solution(){
			arr[1] = 0; // 1�϶��� Ƚ�� 0
			
			for(int i = 2; i <= n; i++){
				arr[i] = arr[i - 1] + 1;  // ��Ģ 3�� : 1�� ����
				if(i % 2 == 0){
					arr[i] = min(arr[i], arr[i/2] + 1);  // ��Ģ 2 �� : 2�� �������� ��� 
				} 
				if(i % 3 == 0){
					arr[i] = min(arr[i], arr[i/3] + 1);  // ��Ģ 1 �� : 3�� �������� ���
				}  
			} 
		}
		
		void printMin(){
			cout << arr[n];	  
	}
};

int main(void){
	makeOne one;
	one.setNum();
	one.solution();
	one.printMin();
	return 0;
}

// �� 10�� 4�� �Ǵµ� �������? 
