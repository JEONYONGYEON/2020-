#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

// sort의 기준이 되는 함수
bool comp(const string &s1, const string &s2){
	if(s1.size() == s2.size()){ // 사이즈가 같으면, 사전순 앞으로
	    return s1 < s2; 
	}
	return s1.size() < s2.size();    // 사이즈 다르면 작은게 앞으로. 
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
	
	sort(v.begin(), v.end(), comp);  //  정렬
	
	end_iter = unique(v.begin(), v.end());    // 중복 제거
	// 중복이 제거 된 후 size는 동일하기 때문에,
	// 중복의 마지막  end_iter를 받습니다.
	
	for(iter = v.begin(); iter != end_iter; iter++){
		printf("%s\n",(*iter).c_str());  //  C++ style string을 C style로 출력. 
	} 
	
	return 0; 
} 
