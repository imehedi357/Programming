/************************************/
/* NoobM							*/
/* File Name : 104a.cpp				*/
/* Date : 25.06.2020 16:11:14 +06	*/
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
	
	int r = n - 10;
	
	if(r <= 0) cout << 0 << endl;
	else if(r < 10 || r == 11) cout << 4 << endl;
	else if(r == 10) cout << 15 << endl;
	else cout << 0 << endl;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	///cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}
