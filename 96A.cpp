#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 1;
    char prev, cur; cin >> prev;
    while(cin >> cur){
        if(cur == prev){
            if(++cnt == 7) {
                cout << "YES";
                return 0;
            }}
        else cnt = 1;
        prev = cur;
    }
    cout << "NO";
    return 0;
}