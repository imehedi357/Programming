/*
 * NoobM
 * File Name : part.cpp
 * Date : 21.05.2020 01:43:53 +06
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
    
    int n;
    cin >> n;
    
    vector <int> a(n + 10);
    
    vector <vector<int>> dp (1000, vector<int> (1000, 0));
    
    int total = 0;
    int count = 0;
    
    for(int i = 1; i <= n; i++) cin >> a[i], total += a[i];
    a[0] = 0;
    
    if(n < 3 || total % 3 != 0) cout << 0 << endl;
	
	if(total % 3 == 0 && n >= 3) {
		rep(i,1, total/3 + 1) {
			rep(j,1, n + 2) {
				dp[i][j] = dp[i][j - 1];
				if(a[j - 1] <= i) {
					int temp = dp[i - a[j - 1]][j - 1] + a[j - 1];
					if(temp > dp[i][j])
						dp[i][j] = temp;
					
				}
				if(dp[i][j] == total / 3) count++; 
				
			}
			
		}
		
		if( count < 3) cout << 0 << endl;
		else cout << 1 << endl;
		
		/*rr(i, total/3 + 1) {
			rr(j, n + 2){
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}*/
	}
    return 0;
}
