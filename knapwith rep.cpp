/*
 * NoobM
 * File Name : knapwith rep.cpp
 * Date : 16.05.2020 21:13:00 +06
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
#define vin(a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;

int knapsack(int W, vector<int> w, vector<int> v) {
	vector<int> value(W+5, 0);
	value[0] = 0;
	
	int n = w.size();
	
	for(int ww = 1; ww <= W; ww++) {
		for(int i = 0; i < n; i++) {
			if(w[i] <= ww) {
				int val = value[ww - w[i]] + v[i];
				if(val > value[ww]) value[ww] = val;
			}
		}
	}
	
	return value[W];
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, W;
    cin >> n >> W;
    
    vin(w);
    vin(v);
    
	
	
	cout << knapsack(W, w, v) << endl;
    return 0;
}
