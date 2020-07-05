/************************************/
/* NoobM							*/
/* File Name : 1371b.cpp				*/
/* Date : 01.07.2020 19:52:45 +06	*/
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
	int n, r;
	cin >> n >> r;
	
	ll counter = 0;
	
	if(r >= n) counter++;
	if(r < n) n = r;
	else n--;

	counter += (((ll)n * (ll)(n + 1)) / 2);
	
	cout << counter << endl;
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
