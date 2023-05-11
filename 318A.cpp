#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k; cin >> n >> k;
    cout << 2 * k - (k <= (n + n % 2) / 2 ? 1 : n + n % 2);
    return 0;
}