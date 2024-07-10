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
        ll arr[n];
        for (ll i(0); i < n; i++)  mt.insert(i + 1);
        for (ll i(0); i < n; i++) cin >> arr[i];
        if (n == 1) { cout << -1 << endl; continue;}
        vector<ll> vec;
        bool flagu = 1;
        for (auto e : arr) {
            // cout << e << " e    ";
            // for (auto e : mt) cout << e << " "; cout << endl;
            auto it = mt.begin();
            if (*it != e) {vec.push_back(*it), mt.erase(it); continue;}
            // it++;
            if (*it == e && mt.size() == 1) {vec.pb(*it); continue;}
            it++;
            vec.pb(*it); mt.erase(it);

        }
        if (vec[n - 1] == arr[n - 1]) {
            vec[n - 1] = vec[n - 2];
            vec[n - 2] = arr[n - 1];
        }
        for (ll i(0); i < n; i++) {
            if (arr[i] == vec[i]) flagu = 0;
        }
        if (flagu == 0) cout << -1 << endl;
        else {
            for (auto e : vec) cout << e << " "; cout << endl;
        }
    }

}
