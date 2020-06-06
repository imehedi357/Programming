/*
 * NoobM
 * File Name : b.cpp.cpp
 * Date : 04.06.2020 21:02:34 +06
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
		int n;
		cin >> n;
		
		vector<bool> s(1026, 0);
		vector <int> sk(n);
		
		rr(i, n) {
			int x;
			cin >> x;
			s[x] = true;
			sk[i] = x;
			
		}
		
		int ans = -1;
		
		for(int i = 1; i < 1024; i++) {
			int flag = 0;
			for(int z : sk) {
				int l = z ^ i;
				
				if(s[l] == false) {
					flag = 1;
					break;
				}
			}
			
			if(flag == 0) {
				ans = i;
				break;
			}
			
		}
		
		cout << ans << endl;
		
		
	}

    return 0;
}
