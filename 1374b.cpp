/************************************/
/* NoobM							*/
/* File Name : 1374b.cpp				*/
/* Date : 28.06.2020 20:43:03 +06	*/
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
	if(n == 1) {
		cout << 0 << endl;
		return;
	}
	
	if(n % 3 != 0) {
		cout << -1 << endl;
	}

	else {
		int counter = 0;
		while(n > 2) {
			if(n % 3 == 0 && n % 6 != 0) {
				counter++;
				n *=2;
			}
			else if(n % 6 != 0) break;
			else {
				n /= 6;
				counter++;
			}
		}
		
		if(n  == 1) cout << counter << endl;
		else cout << -1 << endl;
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
