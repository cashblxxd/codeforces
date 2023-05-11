#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> m >> n;
    vector<int> a(n);
    for(int & i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = a[m - 1] - a[0];
    for(int i = 1; i < n - m + 1; ++i)
        ans = min(ans, a[i + m - 1] - a[i]);
    cout << ans;
    return 0;
}