#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
bool compare(pair<int, int>& a, pair<int, int>& b){
    if(b.first > a.first)
        return true;
    else if(b.first == a.first){
        if(b.second > a.second)
            return true;
        else
            return false;
    }
    else
        return false;
}
 
int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    vector <pair<int, int> > v(N);
    
    //v·Î ¼±¾ğ ÈÄ v.resize(N) ÇØÁàµµ µÊ.
    
    for(int i = 0; i < N; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), compare);
    
    for(int i = 0; i < N; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
    
    return 0;
}

