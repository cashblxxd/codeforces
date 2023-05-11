#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, sum = 0; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i]; sum += a[i];
    }
    sort(a.rbegin(), a.rend());
    int cur = a[0], cnt = 1;
    while(2 * cur <= sum) cur += a[cnt++];
    cout << cnt;
    return 0;
}