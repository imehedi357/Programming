/*
 * NoobM
 * File Name : naruto.cpp
 * Date : 04.06.2020 00:37:31 +06
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
    
    while (t--) {
		int n, z;
		cin >> n >> z;
		
		priority_queue <int> q;
		
		while(n--) {
			int x;
			cin >> x;
			q.push(x);
		}
		int counter = 0;
		while(z>0) {
			if(q.top() == 0) break;
			else {
				counter++;
				int l = q.top();
				q.pop();
				z -= l;
				l = l >> 1;
				q.push(l);
				
			}
		}
		
		if(z > 0) cout << "Evacuate" << endl;
		else cout << counter << endl;
		
	}

    return 0;
}
