/************************************/
/* NoobM							*/
/* File Name : 1279b.cpp				*/
/* Date : 25.06.2020 19:26:13 +06	*/
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
	int n, s;
	cin >> n >> s;
	 
	vi(n, a);
	
	ll sum = 0;
	
	int stop = -1;
	
	for(int i = 0; i < n; i++) {
		sum += a[i];
		
		if(sum > s) {
			stop = i;
			break;
		}
	}
	
	int ma = 0;
	
	int pos = -1;
	
	for(int i = 0; i <= stop; i++) {
		if(a[i] > ma) {
			ma = a[i];
			pos = i + 1;
		}
	}
	
	if(stop == -1) cout << 0 << endl;
	else cout << pos << endl;
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
