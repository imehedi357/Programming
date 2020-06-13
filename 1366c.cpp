/************************************/
/* NoobM							*/
/* File Name : 1366c.cpp				*/
/* Date : 11.06.2020 21:58:01 +06	*/
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
	int n, m;
	cin >> n >> m;
	
	int corners = n + m - 1;
	
	vector<vii> a(n, vii (m));
	map<int, int> zeros;
	map<int, int> ones;
	map<int, int> totals;
	
	rr(i, n) {
		rr(j, m) {
			cin >> a[i][j];
			if(a[i][j] == 0) zeros[i+j]++;
			else ones[i + j]++;
			totals[i+j]++;
		}
	}
	int c = corners - 1;
	int counter = 0;
	for(int i = 0; i < corners/2; i++) {
		int k = 0, l = 0;
		k = 2*totals[i] - zeros[i] - zeros[c];
		
		l = 2*totals[i] - ones[i] - ones[c];

		
		//bug(zero);
		//bug(one);
		
		int mb = min(k, l);
		counter += mb;
		c--;
	}
	
	//for(int i = 0; i < ; i++) {
	//	cout << i << " "  << zeros[i] << " ";
	//}
	cout << counter <<  endl;
	
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
