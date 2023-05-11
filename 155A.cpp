#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int x, cnt = 0; cin >> x;
    int mi = x, ma = x;
    while(--n) {
        cin >> x;
        if(x < mi) mi = x, cnt++;
        else if(x > ma) ma = x, cnt++;
    }
    cout << cnt;
    return 0;
}