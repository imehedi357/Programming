/*
 * NoobM
 * File Name : chefrecp.cpp
 * Date : 24.05.2020 22:04:19 +06
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
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while(t--) {
		int n;
		cin >> n;
		
		vina;
		
		map <int, int> mp;
		int flag = 0;
		set <int> rec;
		set <int> ing;
		
		for(int i = 0; i < n ; i++) {
			if(mp[a[i]]) {
				flag = 1;
				break;
			}
			int counter = 1;
			while(a[i + 1] == a[i]) {
				i++;
				counter++;				
			}
			
			mp[a[i]] = counter;
			
			
		}
		for(int x: a) {
			ing.insert(x);
			rec.insert(mp[x]);
		}
		
		if(ing.size() != rec.size()) {
			flag = 1;
		}
		
		if(flag == 1) cout << "NO" << endl;
		
		else cout << "YES" << endl;
	}

    return 0;
}
