/************************************/
/* NoobM							*/
/* File Name : 1370a.cpp				*/
/* Date : 20.06.2020 20:37:22 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>
#define inf 0x3f3f3f3f

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	
	vi(n, a);
	
	sort(a.begin(), a.end());
	
	int mn = -1;
	int mx = -1;
	
	for(int i = 0; i < (k + 1)/2; i++) {
		mn = max(a[i], mn);
	}
		
	cout << mn << endl;
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
