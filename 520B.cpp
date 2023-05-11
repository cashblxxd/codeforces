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
    int n, m, cnt = 0; cin >> n >> m;
    while (m != n) {
        if((m > n) && (m % 2 == 0)) m /= 2;
        else m++;
        cnt++;
    }
    cout << cnt;
    return 0;
}