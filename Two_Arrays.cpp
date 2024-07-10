#include <bits/stdc++.h>
using namespace std;
//data and loops
#define float double
#define f(i,a,b) for (ll i=(a); i<(b); ++i)
#define fast  ios_base::sync_with_stdio(0); cin.tie(0);
#define modi 1000000007
#define ll long long
#define ld long double
#define endl "\n"
//pair
#define pi pair<ll,ll>
#define fs firmapu
#define ss second
// vector
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vc vector<char>
// #define vvc vector<vector<char>>
#define pb push_back
// queue
#define qi queue<ll>






ll solve() {

    ll n, m; cin >> n >> m;
    ll dpf[m + 1][n + 1];
    f(i, 0, m + 1) {
        f(j, 0, n + 1) dpf[i][j] = 0;
    }


    f(i, 1, n + 1) dpf[1][i] = 1;
    f(i, 2, m + 1) {
        f(j, 1, n + 1) {
            f(it, 1, j + 1) (dpf[i][j] += dpf[i - 1][it]) %= modi;
        }
    }

    // f(i, 0, m + 1) {
    //     f(j, 0, n + 1) cout << dpf[i][j] << " "; cout << endl;
    // }

    ll ans = 0;
    for (ll i(1); i <= n; i++) {
        ll hue = 0;
        f(j, 1, n - i + 2) {
            hue += dpf[m][j];
            hue %= modi;
        }
        (ans += (hue * (dpf[m][i])) % modi) %= modi;

    }
    cout << ans;
    return 58;






}





int main() {
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outp.txt", "w", stdout);
#endif
    solve();
}
