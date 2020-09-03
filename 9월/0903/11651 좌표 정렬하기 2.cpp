#include <vector>
#include <algorithm>
#include <utility>
#include <cstdio>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {
    if (a.second == b.second) return (a.first < b.first);
    return (a.second < b.second);
}

int main() {
    int N, i, j, k;
    vector< pair<int, int> > v;

    scanf("%d ", &N);

    for(i = 0; i < N; i++) {
        scanf("%d %d", &j, &k);
        v.push_back(pair<int, int>(j, k));
    }
    sort(v.begin(), v.end(), sortbysec);

    for(i = 0; i < N; i++) {
        printf("%d %d\n", v[i].first, v[i].second);
    }

    return 0;
}
