#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x; cin >> n;
    int a[] = {0, 0, 0, 0};
    while (n--) {
        cin >> x;
        a[x - 1]++;
    }
    int ans = a[2] + a[3]; a[0] = max(a[0] - a[2], 0);
    ans += a[1] / 2;
    if(a[1] % 2){
        ans++;
        a[0] = max(a[0] - 2, 0);
    }
    ans += a[0] / 4;
    if(a[0] % 4) ans++;
    cout << ans;
    return 0;
}