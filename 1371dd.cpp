/************************************/
/* NoobM							*/
/* File Name : 1371dd.cpp				*/
/* Date : 01.07.2020 21:28:40 +06	*/
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
	
	int per = k/n;
	//int extra = k % n;
	//if()
	vector<vector<int>> ans(n, vii (n, 0));
	
	rr(i, n) {
		for(int j = i; j < per + i; j++) {
			if(k > 0){
				ans[i][(j) % n] = 1;
				k--;
			}
		}
	}
	rr(i, n) {
		for(int j = i + per; j <= per + i; j++) {
			if(k > 0){
				ans[i][(j) % n] = 1;
				k--;
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
