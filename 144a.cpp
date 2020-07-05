/************************************/
/* NoobM							*/
/* File Name : 144a.cpp				*/
/* Date : 25.06.2020 03:06:43 +06	*/
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
	int n;
	cin >> n;
	
	int mx = -1;
	int mn = 1000;
	
	vii a(n);
	
	rr(i, n) {
		cin >> a[i];
		mn = min(mn, a[i]);
		mx = max(mx, a[i]);
	}
	
	int mni = 0;
	int mxi = 0;
	
	bool ok = false;
	
	for(int i = 0; i < n; i++) {
		if(a[i] == mn) mni = i;
		if(a[i] == mx && ok == false) {
			mxi = i;
			ok = true;
		}
	}
	
	if(mxi == mni) cout << 0 << endl;
	else if(mxi < mni) cout << mxi + (n - mni - 1) << endl;
	else cout << mxi + (n - mni - 1) - 1 << endl;
	
	//cout << counter << endl;
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
