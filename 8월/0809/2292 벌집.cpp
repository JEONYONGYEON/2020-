#include <iostream>

using namespace std;

int main(void){
	int num, layer = 0;
	cin >> num;
	
	for(int sum = 2; sum <= num; layer++)
	{
		sum += 6 * layer;
	}
	if(num == 1) layer = 1;
	cout << layer;
} 

/*
for 문 작성에서 sum  
*/
