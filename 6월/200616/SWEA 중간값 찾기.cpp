#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, temp;
	scanf("%d", &N);
	vector<int> a;
	
	for(int i = 0; i < N; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());
	cout << a[N/2] << endl;
}
