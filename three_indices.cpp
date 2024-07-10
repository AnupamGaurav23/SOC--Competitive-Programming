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

        ll n;
        cin >> n;
        ll arr[n];
        for (ll i(0); i < n; i++) cin >> arr[i];
        multiset<ll> mt, qt;
        map<ll, ll> mp;
        for (auto e : arr) {
            mp[e] = 1;
            if (mt.upper_bound(-1 * e) != mt.end()) mp[e] *= 1;
            else mp[e] *= 0;
            mt.insert(-1 * e);
        }


        mt.clear();
        for (ll i(n - 1); i >= 0 ; i--) {
            ll e = arr[i];
            if (mt.upper_bound(-1 * e) != mt.end()) mp[e] *= 1;
            else mp[e] *= 0;
            mt.insert(-1 * e);
        }
        // for (auto e : arr) cout << mp[e] << " "; cout << endl;
        ll indi = -1;
        for (ll i(1); i < n - 1; i++) {
            if (mp[arr[i]] == 1) {indi = i; break;}
        }
        if (indi == -1) {cout << "NO" << endl; continue;}
        else {
            ll maxi = arr[indi];
            ll lo, hi;
            for (ll i(0); i < indi; i++) {
                if (arr[i] < maxi) {lo = i; break;}
            }
            for (ll i(indi + 1); i < n; i++) {
                if (arr[i] < maxi) {hi = i; break;}
            }

            cout << "YES" << endl << lo + 1 << " " << indi + 1 << " " << hi + 1 << endl;
        }

    }

}
