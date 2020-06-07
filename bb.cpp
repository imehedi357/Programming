/*
 * NoobM
 * File Name : bb.cpp
 * Date : 07.06.2020 20:55:35 +06
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
    
    while (t--) {
		int n;
		cin >> n;
		
		vin(a);
		vin(b);
		
		vector <int> k = a;
		
		sort(k.begin(), k.end());
		
		//22int flag = 0;
		
		/*for(int i = 0; i < n; i++) {
			int min = k[i];
			int pos = b[i];
			if(min = a[i]) continue;
			for(int j = i; j < n; j++) {
				if(a[j] == min) {
					if(pos == b[j]) {
						flag = 1;
						
					}
				}
			}
			
		}*/
		
		for(int i = 0; i < n; i++) {
			int flag = 0;
			for(int j = 0; j < n; j++) {
				if(a[j] > a[i]) {
					if(b[i] != b[j]) {
						swap(a[i], a[j]);
						swap(b[i], b[j]);
						flag++;
					}
					
				}
			}
			if(flag == 0) {
				break;
			}
			
		}
		
		int flag2 = 0;
		
		rr(i, n) {
			if(a[i] != k[i]) {
				flag2 = 1;
				break;
			}
			
		}
		
		if(flag2 == 1) cout << "No" << endl;
		else cout << "Yes" << endl;
	}

    return 0;
}
