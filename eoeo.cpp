/************************************/
/* NoobM							*/
/* File Name : eoeo.cpp				*/
/* Date : 08.06.2020 21:43:58 +06	*/
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
	long long ts;
	cin >> ts;
	long long ans = 0;
	if(ts % 2 != 0) {
		ans = ts / 2;
		cout << ans << endl;
	}
	
	else {
		long long k = ts;
		long long divtimes = 0;
		
		while(k % 2 == 0) {
			k /= 2;
			divtimes++;
		}
		
		ans = k / 2;
		
		cout << ans << endl;
		
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
