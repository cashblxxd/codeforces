#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, prev, cur, ans = 1, curans = 1; cin >> n >> prev;
    while(--n) {
        cin >> cur;
        if(cur >= prev) curans += 1;
        else {
            ans = max(ans, curans);
            curans = 1;
        }
        prev = cur;
    }
    cout << max(ans, curans);
    return 0;
}