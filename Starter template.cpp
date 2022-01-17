#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define endl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()

template<typename T> // cin >> vector<T>
istream& operator>> (istream &istream, vector<T> &v)
{ for (auto &it : v) cin >> it; return istream; }

template<typename T> // cout << vector<T>
ostream& operator<< (ostream &ostream, const vector<T> &c)
{ for (auto &it : c) cout << it << " " ; return ostream; }

template<typename T> // print 2d vector<T>
ostream& operator <<(ostream& ostream,const vector<vector<T>>& v) 
{ for(auto& row : v) { for(auto& cell : row) { cout << cell << " "; } cout << endl; } return ostream; }

ll power(ll a, ll b){
    ll res = 1;
    while (b > 0) { if (b & 1) res = res * a; a = a * a; b >>= 1;}
    return res;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    ll _tc;cin >> _tc;
    while(_tc--){
        
    }
    return 0;
}
