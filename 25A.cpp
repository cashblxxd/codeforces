#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cnt = 4; cin >> n;
    int prev2, prev1, cur; cin >> prev2 >> prev1 >> cur;
    if(abs(prev2 - prev1) % 2) {
        if (abs(prev2 - cur) % 2) cout << 1;
        else cout << 2;
        return 0;
    } else if(abs(prev2 - cur) % 2) {
        cout << 3;
        return 0;
    }
    n -= 3;
    prev1 = cur;
    while(n--) {
        cin >> cur;
        if(abs(prev1 - cur) % 2) {
            cout << cnt;
            return 0;
        }
        cnt++; prev1 = cur;
    }
    return 0;
}