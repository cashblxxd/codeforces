#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, i = 1; cin >> n >> k;
    for(; (5 * i * (i + 1) / 2 <= 240 - k) && (i <= n); ++i) {}
    cout << i - 1;
    return 0;
}