#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, l; cin >> n >> l;
    vector<long long> a(n);
    for(long long & i : a) cin >> i;
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    n = a.size();
    long double d = a[0];
    for(int i = 0; i < n - 1; ++i) {
        d = max(d, (a[i + 1] - a[i]) / 2.0l);
    }
    cout << fixed << max(d, l - a[n - 1] + 0.0l);
    return 0;
}