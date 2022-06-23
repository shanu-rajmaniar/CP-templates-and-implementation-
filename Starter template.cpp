#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define endl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()

template<typename T>
istream& operator >>(istream& istream, vector<T>& v) {
    for(auto &it : v) {
        cin >> it;
    }
    return istream;
}

template<typename T>
ostream& operator <<(ostream& ostream, vector<T>& v) {
    for(auto &it : v) {
        cout << it << " ";
    }
    return ostream;
}

ll power(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a; a = a * a; b >>= 1;
    }
    return res;
}

ll binpow(ll a, ll b, ll m) {
    a %= m; ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m; a = a * a % m; b >>= 1;
    }
    return res;
}

int64_t floor_div(int64_t a, int64_t b) {
    return a / b - ((a ^ b) < 0 && a % b != 0);
}

int64_t ceil_div(int64_t a, int64_t b) {
    return a / b + ((a ^ b) > 0 && a % b != 0);
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    ll _tc; cin >> _tc;
    while(_tc--) {
        
    }
    return 0;
}
