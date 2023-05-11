#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n;
    vector<int> a(n);
    for(int & i : a) cin >> i;
    cin >> m;
    vector<int> b(m);
    for(int & i : b) cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int pa = 0, pb = 0, cnt = 0;
    while((pa < n) && (pb < m))
        if(abs(a[pa] - b[pb]) <= 1) pa++, pb++, cnt++;
        else if(a[pa] < b[pb]) pa++;
        else pb++;
    cout << cnt;
    return 0;
}