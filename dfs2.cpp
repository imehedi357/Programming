/************************************/
/* NoobM							*/
/* File Name : dfs2.cpp				*/
/* Date : 12.06.2020 02:13:42 +06	*/
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
vector<bool> visited;
vector<bool> stck;

bool cycle = false;

void explore(int u) {
	stck[u] = true;
	visited[u] = true;
	
	for(int v : graph[u]) {
		
		if(!visited[v] && !stck[v]) explore(v);
		else if(stck[v]){
			cycle = true;
		}
	}
	
	stck[u] = false;
}

void dfs(vector<vii> g , int n) {
	for(int i = 0; i < n; i++) {
		if(!visited[i]) explore(i);
	}
	
}

void solve() {
	int n, m;
	cin >> n >> m;
	
	graph = vector<vii> (n);
	visited = vector<bool> (n);
	stck = vector<bool> (n);
	
	rr(i, m) {
		int u, v;
		cin >> u >> v;
		--u, --v;
		graph[u].push_back(v);
		
	}
	
	dfs(graph, n);
	
	cout << cycle << endl;
	
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
