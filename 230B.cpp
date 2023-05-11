#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include <algorithm>
#include <vector>
#include "math.h"
#include <map>

using namespace std;

bool is_prime(long long x) {
    long long i = 2; while (i * i <= x){
        if(x % i == 0) return false;
        i++;
    }
    return true;
} // ivanistdoof

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<long long, bool> m;
    int n; cin >> n; while(n--) {
        long long x; cin >> x;
        if(x == 1) cout << "NO\n";
        else if(m.count(x))
            cout << (m[x] ? "YES\n" : "NO\n");
        else {
            long long t = sqrt(x);
            if((t * t == x) && is_prime(t)) {
                cout << "YES\n";
                m[x] = true;
            }
            else {
                cout << "NO\n";
                m[x] = false;
            }
        }
    }
    return 0;
}