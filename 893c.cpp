#include <bits/stdc++.h>

#define rr(i, b) for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

vector<vii> graph;
vector<bool> visited;
vii a;
int k = INT_MAX;
ll sum = 0;

void explore(int u) {
    visited[u] = true;
	k = min(k , a[u]);
    for(int v : graph[u]) {
        if(!visited[v]) explore(v);
    }
}

void dfs(vector<vii> G) {
    for(int i = 0; i < G.size(); i++) {
        if(!visited[i]) {
			k = INT_MAX;
			explore(i);
			sum += k;
		}
    }
}


void solve() {
    int n, m;
    cin >> n >> m;
    graph = vector<vii> (n);
    visited = vector<bool> (n);
    a = vii (n);
    
    rr(i, n) cin >> a[i];
    
    
    //int e;
    //cin >> e;

    rr(i, m) {
        int u, v;
        cin >> u >> v;
        --u, --v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(graph);

    cout << sum << endl;

}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
