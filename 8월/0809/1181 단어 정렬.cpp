#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

// sort�� ������ �Ǵ� �Լ�
bool comp(const string &s1, const string &s2){
	if(s1.size() == s2.size()){ // ����� ������, ������ ������
	    return s1 < s2; 
	}
	return s1.size() < s2.size();    // ������ �ٸ��� ������ ������. 
} 

int main(void){
	vector<string> v;
	
	int n;
	scanf("%d", &n);  // C style
	
	for(int i = 0; i < n; i++){
		char c[51];
		scanf("%s", c);  // C style
	    string str(c);
	    v.push_back(str);
	}
	
	vector<string>::iterator iter;
	vector<string>::iterator end_iter;
	
	sort(v.begin(), v.end(), comp);  //  ����
	
	end_iter = unique(v.begin(), v.end());    // �ߺ� ����
	// �ߺ��� ���� �� �� size�� �����ϱ� ������,
	// �ߺ��� ������  end_iter�� �޽��ϴ�.
	
	for(iter = v.begin(); iter != end_iter; iter++){
		printf("%s\n",(*iter).c_str());  //  C++ style string�� C style�� ���. 
	} 
	
	return 0; 
} 
