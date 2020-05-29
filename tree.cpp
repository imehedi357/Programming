/*
 * NoobM
 * File Name : tree.cpp
 * Date : 22.05.2020 01:20:48 +06
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

vector<int> level;
int k = 2;


void bfs(int u) {
	queue<int> q;
	q.push(u);
	level[u] = 1;
	visited[u] = true;
	
	while(!q.empty()) {
		u = q.front();
		q.pop();
		
		for(int v : graph[u]) {
			if(!visited[v]) {
				q.push(v);
				level[v] = level[u] + 1;
				visited[v] = true;
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
	
	visited = vector<bool> (n);
	level = vector<int> (n, 0);
	
	int root = 0;
	
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		
		if(a == -1) root = i;
		else graph[a].push_back(i);
	}
	
	//level[root] = 1;
	
	bfs(root);
	
	//bug(root);
	
	//rr(i, n) {
	//	rr(j, graph[i].size()) cout << graph[i][j] << " ";
	//	cout << endl;
		
	//}
	//for(int x : level) cout << x << " ";
	//cout << endl;
	sort(level.rbegin(), level.rend());
	
	cout << level[0] << endl;
	
    return 0;
}
