/*
 * NoobM
 * File Name : dfs.cpp
 * Date : 14.05.2020 01:41:41 +06
 * Version : 1.0
 * 
 * Copyright 2020 Mehedi <imehedi357@gmail.com>
 * Shahjalal University of Science & Technology 
 * 
 * Geany 1.36
 * 
 */

#include <bits/stdc++.h>

#define rep(i, a, b) \
    for (int i = int(a); i < int(b); i++)
#define rr(i, b) \
    for (int i = 0; i < int(b); i++)
#define vina vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int u) {
		if(visited[u]);
		
		else {
			visited[u] = true;
			for(int x : graph[u]) {
				if(visited[x]) continue;
				else {
					dfs(x);
				}
			}
		}
	}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    graph = vector<vector<int>> (n);
    visited = vector<bool> (n, 0);
    
    rr(i, n) {
		int u, v;
		cin >> u >> v;
		
		--u, --v;
		
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	dfs(0);
	
	pvec(visited);
	

    return 0;
}
