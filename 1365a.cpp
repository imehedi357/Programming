/*
 * NoobM
 * File Name : 1365a.cpp
 * Date : 07.06.2020 20:39:14 +06
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
		int n, m;
		cin >> n >> m;
		
		int dp[n][m];
		
		int badrow = 0;
		int badcolumn = 0;
		
		rr(i, n) {
			rr(j, m) {
				int x;
				cin >> x;
				
				dp[i][j] = x;
			}
		}
		rr(i, n) {
			rr(j, m) {
				if(dp[i][j] == 1) {
					badrow++;
					break;
				}
			}
		}
		
		rr(i, m) {
			rr(j, n) {
				if(dp[j][i] == 1) {
					badcolumn++;
					break;
				}
			}
		}
		int goodrows = n - badrow;
		int goodcolumns = m - badcolumn;
		
		int k = min (goodrows , goodcolumns);
		
		if(k % 2 == 0) cout << "Vivek" << endl;
		else cout << "Ashish" << endl;
		
	}

    return 0;
}
