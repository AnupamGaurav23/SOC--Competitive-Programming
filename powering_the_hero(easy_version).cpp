#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl "\n"
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int modi = 1e9 + 7, n, a, b, m;

set<ll> g[200005];
vector<ll> dist(200005, 0);
map<ll, ll> mp;
set<pair<ll, ll>> st;


void dfs(ll vertex, ll par) {
    for (auto child : g[vertex]) {
        if (child == par) continue;
        dist[child] = dist[vertex] + 1;
        mp[child] = vertex;
        if (g[child].size() == 1) st.insert({dist[child], child});
        dfs(child, vertex);
    }


}





int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin) ;
    freopen("outp.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n ; cin >> n;
        ll ans = 0;
        multiset<ll> mt;
        for (ll i(0); i < n; i++) {
            ll a; cin >> a;
            if (a == 0 && mt.size() > 0) {
                auto it = mt.end();
                it--;
                ans += *it;
                mt.erase(it);
            }
            else {
                mt.insert(a);
            }
        }
        cout << ans << endl;

    }

}
