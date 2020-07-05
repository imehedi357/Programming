/************************************/
/* NoobM							*/
/* File Name : bfs.cpp				*/
/* Date : 14.06.2020 19:53:37 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	
	vector <vii> g(n);
	
	rr(i, m) {
		int u, v;
		cin >> u >> v;
		
		--u, --v;
		
		g[u].push_back(v);
		g[v].push_back(u);
	}
	
	vii dist(n, -1);
	vii pre(n, -1);
	
	int s, d;
	cin >> s >> d;
	--s, --d;
	
	queue <int> q;
	
	q.push(s);
	dist[s] = 0;
	
	while(!q.empty()) {
		int u = q.front();
		
		for(int v : g[u]) {
			if(dist[v] == -1) {
				q.push(v);
				dist[v] = dist[u] + 1;
				pre[v] = u;
			}
			
		}
		q.pop();	
	}
	
	// Reconstracting path
	
	list <int> rp;
	
	int u = d;
	
	while (u != s) {
		rp.push_front(u);
		u = pre[u];
	}
	
	cout << dist[d] << endl;
	pvec(pre);
	
	for(auto x : rp) {
		cout << x << " ";
	}
	cout << endl;
	
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
