/************************************/
/* NoobM							*/
/* File Name : 1375g.cpp				*/
/* Date : 05.07.2020 05:09:28 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

vector<vii> graph;
vii colour;
vii visited;

void dfs(int u) {
	visited[u] = true;
	for(int v : graph[u]) {
		if(!visited[v]) {
			colour[v] = 1 - colour[u];
			dfs(v);
		}
	}
}

void solve() {
	int n;
	cin >> n;
	
	graph = vector<vii> (n);
	colour = vii (n);
	visited = vii (n);
	
	rr(i, n - 1) {
		int u, v;
		cin >> u >> v;
		--u, --v;
		
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	dfs(0);
	
	int w = 0, b = 0;
	
	for(int x : colour) {
		if(x == 0) w++;
		else b++;
	}
	
	cout << min(w, b) - 1 << endl;
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
