/************************************/
/* NoobM							*/
/* File Name : topsort.cpp				*/
/* Date : 13.06.2020 20:34:24 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

list <int> top;

vector<vii> g;
vector<bool> visited;

vii pre, post;


int clck = 0;

void previsit(int v) {
	pre[v] = clck;
	clck++;
}

void postvisit(int v) {
	post[v] = clck;
	clck++;	
}

void explore(int u) {
	visited[u] = true;
	
	previsit(u);
	
	for(int v : g[u]) {
		if(!visited[v]) explore(v);	
	}
	
	postvisit(u);
	top.push_front(u);
	
}

void dfs(int n) {
	for(int i = 0; i < n; i++) {
		if(!visited[i]) explore(i);
	}
}

void solve() {
	int n, m;
	cin >> n >> m;
	
	g = vector<vii> (n);
	visited = vector<bool> (n);
	
	pre = vii (n);
	post = vii (n);
	
	rr(i, m) {
		int u, v;
		cin >> u >> v;
		
		--u, --v;
		
		g[u].push_back(v);
		
	}
	
	dfs(n);
	
	for(auto x : top) {
		cout << x + 1 << " ";
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
