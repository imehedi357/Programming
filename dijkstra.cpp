/************************************/
/* NoobM							*/
/* File Name : dijkstra.cpp				*/
/* Date : 15.06.2020 18:31:27 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>
#define inf 0x3f3f3f3f

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<pair<int, int>>> g(n);
	
	rr(i, m) {
		int u, v, w;
		cin >> u >> v >> w;
		--u, --v;
		g[u].push_back({v, w});
	}
	
	int s, d;
	cin >> s >> d;
	
	--s, --d;
	
	
	//dijkstra
	vector<bool> marked(n);
	vector<int> dist(n, inf);
	
	priority_queue <pair<int, int> , vector<pair<int, int>> , greater<pair<int, int>>> pq;
	
	dist[s] = 0;
	pq.push({dist[s], s});
	
	while(!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		
		if(marked[u]) continue;
		marked[u] = true;
		for(auto v : g[u]) {
			if(dist[v.first] > dist[u] + v.second) {
				dist[v.first] = dist[u] + v.second;
				pq.push({dist[v.first], v.first});
			}
			
		}		
	}
	if(dist[d] == inf) cout << -1 << endl;
	else cout << dist[d] << endl;
	//pvec(dist);
	
	
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
