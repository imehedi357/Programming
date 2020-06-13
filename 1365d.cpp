/*
 * NoobM
 * File Name : 1365d.cpp
 * Date : 07.06.2020 22:41:09 +06
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
    
    for(int z = 1; z <= t; z++) {
		int n, m;
		cin >> n >> m;
		
		string s[n];
		
		rr(i,n)  cin >> s[i];
		
		bool good = false;
		int flag = 0;
		
		rr(i, n) {
			rr(j, m) {
				if(s[i][j] == 'G') {
					good = true;
				}
				if(s[i][j] == 'B') {
					if(j + 1 < m) if(s[i][j + 1] == 'G' || (j + 1 == m-1 && i == n - 1)) flag = 1;
					if (i + 1 < n) if(s[i + 1][j] == 'G' || (j == m-1 && i + 1 == n - 1)) flag = 1;
					if(i - 1 >= 0) if(s[i - 1][j] == 'G') flag = 1;
					if(j - 1 >= 0) if(s[i][j - 1] == 'G') flag = 1;
				}
				if(s[i][j] == 'G') {
					int k = 0;
					if(j + 1 < m) {
						if(s[i][j + 1] == '#') k++;
					}
					else k++;
					
					if(i + 1 < n) {
						if(s[i + 1][j] == '#') k++;
					}
					else k++;
					
					if(i - 1 >= 0) {
						if(s[i - 1][j] == '#') k++;
					}
					else k++;
					
					if(j - 1 >= 0) {
						if(s[i][j - 1] == '#') k++;
					}
					else k++;
					
					if(k == 4) flag = 1;
					
					//bug(k);
				}
				
			}
		}
		if (s[n-1][m - 2] == '#' && s[n - 2][m -1] == '#') flag = 1;
		//if(z == 87) {
		//	rr(i, n) cout << s[i] << endl;
			
		//}
		
		if(good == false) cout << "Yes" << endl;
		else {
			if(flag == 1) cout << "No" << endl;
			else cout << "Yes" << endl;
		}
		
	}

    return 0;
}
