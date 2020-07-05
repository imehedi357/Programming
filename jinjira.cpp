/************************************/
/* NoobM							*/
/* File Name : jinjira.cpp				*/
/* Date : 28.06.2020 20:30:10 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve() {
	for(int i = 4090; ;i++) {
		if(i % 4 == 1) {
			int j = (i - 1) - i/4;
			if(j % 4 == 1) {
				int k = (j - 1) - j/4;
				if(k % 4 == 1) {
					int l = (k - 1) - k/4;
					if(l % 4 == 1) {
						int m = (l - 1) - l/4;
						if(m % 4 == 1) {
							bug(i);
							bug(j);
							bug(k);
							bug(l);
							bug(m);
							break;
							
						}
					}
				}
			}
		}
		
	}
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	//cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}
