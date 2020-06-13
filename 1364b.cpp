/************************************/
/* NoobM							*/
/* File Name : 1364b.cpp				*/
/* Date : 13.06.2020 22:36:30 +06	*/
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
	
	vi(n, a);
	
	vii ans(n);
	ans[0] = a[0];
	ans[n - 1] = a[n - 1];
	int counter = 2;
	for(int i = 1; i < n - 1; i++) {
		if((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1])) {
			ans[i] = a[i];
			counter++;
		}		
	}
	
	cout << counter << endl;
	rr(i, n) {
		if(ans[i]) cout << ans[i] << " ";	
	}
	
	cout << endl;
	 
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
