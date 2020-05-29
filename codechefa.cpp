/*
 * NoobM
 * File Name : codechefa.cpp
 * Date : 11.05.2020 02:50:18 +06
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
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    
    while(t--) {
		long long n, q;
		cin >> n >> q;
		
		string s;
		cin >> s;
		
		vector<int> c(q);
		unordered_map<char, int> infected;
		//unordered_set<char> inf;
		
		rr(i, q) cin >> c[i];
		int mx = 0;
		
		for(char x : s) {infected[x]++; mx = max(infected[x], mx);}
		
		
		
		for(int k : c) {
			
			int counter = 0;
			if(k < mx)
			for(auto x : infected) {
				int l = infected[x.first] - k;
				counter += max(0, l);
			}
			cout << counter << endl;
		}
		
	}

    return 0;
}
