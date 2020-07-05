/************************************/
/* NoobM							*/
/* File Name : 1371d.cpp				*/
/* Date : 01.07.2020 20:37:55 +06	*/
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
	int n, k;
	cin >> n >> k;
	
	vector<vector<int>> ans(n, vii (n, 0));
	
	rr(i, n) {
		rr(j, n) {
			if(i + j == (n-1)) {
				if(k > 0) {
					ans[i][j] = 1;
					k--;
				}
			}
		}
	}
	
	int left = k/2;
	
	for(int m = 0; m < (2 * n) - 1; m++) {
		if(m == (n - 1)) break;
		rr(i, n) {
			rr(j, n) {
				if(i + j == m) {
					if(left > 0) {
						ans[i][j] = 1;
						left--;
					}
				}
			}
		}
	}
	
	int lc = k/2 + k % 2;
	
	for(int m = (n); m < (2 * n) - 1; m++) {
		if(m == (n - 1)) break;
		for(int i = n - 1; i >= 0; i--) {
			for(int j = n - 1; j >= 0; j--) {
				if(i + j == m) {
					if(lc > 0) {
						ans[i][j] = 1;
						lc--;
					}
				}
			}
		}
	}
	
	
	
	int maxr = -1;
	int minr = 301;
	int maxc = -1;
	int minc = 301;
	
	rr(i, n) {
		int counter = 0;
		rr(j, n) {
			counter += ans[i][j];
		}
		if(counter > maxr) maxr = counter;
		if(counter < minr) minr = counter;
	}
	
	rr(i, n) {
		int counter = 0;
		rr(j, n) {
			counter += ans[j][i];
		}
		if(counter > maxc) maxc = counter;
		if(counter < minc) minc = counter;
	}
	
	
	int f = (pow((maxr - minr), 2) + pow((maxc - minc), 2));
	
	cout << f << endl;
	
	rr(i,n) {
		rr(j, n) cout << ans[i][j];
		cout << endl;
	}
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}
