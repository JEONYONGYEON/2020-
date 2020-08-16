#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

// 1 <= a <= b <= 1,000,000

int main(void){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	// 최대치 크기만큼 동적할당을 합니다
	bool* arr = new bool[b + 1];
	
	// 배열을 true로 초기화합니다.
	for(int i = 0; i< b+1; i++){
		arr[i] = true;
	}
	
	int j;  // 제곱의 수를 받을 변수
	
    for(int i = 2; i < b+1; i++){
    	
    	if(arr[i]){    // true 이면 
    		
    		if((unsigned int)pow(i, 2) > 1000001){
    			// 제곱이 범위를 넘으면 for문을 나옵니다.
				break; 
			}else{
				// 이미 있는 소수들의 배수들을 지워줍니다.
				for(j = (int)pow(i, 2); j < b+1;){
					arr[j] = false; // 소수가 아닌 수들을 false로 바꿔줌 
			        j += i;	
				} 
			}
			
		}
	} 
	
	// 1인 경우를 제외해야하므로 a가 1 이 들어왔을 때, 2로 만들어줍니다
	if(a == 1) a++;
	
	// true 이면서, a보다 큰 값들을 출력!
	for(int i = a; i < b+1; i++){
		if(arr[i] && i >= a) printf("%d\n", i);
	} 
	
	delete []arr;    // 동적할당 해제
	return 0; 
}
