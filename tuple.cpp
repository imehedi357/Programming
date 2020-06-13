/************************************/
/* NoobM							*/
/* File Name : tuple.cpp				*/
/* Date : 08.06.2020 22:24:05 +06	*/
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
	int p, q, r;
	cin >> p >> q >> r;
	
	int a, b, c;
	cin >> a >> b >> c;
	
	#handle case 0;
	
	int dp = a % p;
	int dq = b % q;
	int dr = c % r;
		
	int qp = a / p;
	int qq = b / q;
	int qr = c / r;
		
	if(p == a && q == b && r == c) {
		cout << 0 << endl;
	}
	else if((p == a && q == b) || (q == b && r == c) || (r == c && p == a)){
		cout << 1 << endl;
	}
	
	else {
		
		
		
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
