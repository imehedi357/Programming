/************************************/
/* NoobM							*/
/* File Name : pci.cpp				*/
/* Date : 22.06.2020 21:46:14 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

vector<bool> vis;

void dfs(int u, vector<int> graph[], vector<bool> ok, vector<int> &path) {
	if(ok[u]) {
		vis[u] = true;
		path.push_back(u + 1);
		
		for(int v : graph[u]) {
			if(!vis[v]) {
				dfs(v, graph, ok, path);
			}
		}
	}
	
}

void solve() {
	int n, m;
	cin >> n >> m;
	
	vi(n, in);
	vi(n, p);
	
	vector<double> pci(n);
	vis = vector<bool> (n);
	
	double maxpci = -1;
	
	rr(i, n) {
		pci[i] = (double)in[i]/p[i];
		if(pci[i] > maxpci) maxpci = pci[i];
	}
	
	vector<bool> ok(n);
	
	rr(i, n) {
		if(pci[i] == maxpci) ok[i] = true;
	}
	
	vector<int> graph[n];
	
	rr(i, m) {
		int u, v;
		cin >> u >> v;
		--u, --v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	vii result;
	vector<int> path;
	
	for(int i = 0; i < n; i++) {
		
		if(ok[i]) {
			dfs(i, graph, ok, path);
		}
		
		if(path.size() > result.size()) {
			result = path;
		}
		
		path.clear();
		//vis.clear();
	}
	
	cout << result.size() 
	
	for(int x : result) {
		cout << x << " ";
	}
	
	cout << endl;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}
