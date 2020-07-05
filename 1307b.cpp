/************************************/
/* NoobM							*/
/* File Name : 1307b.cpp				*/
/* Date : 28.06.2020 03:29:28 +06	*/
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
	int n, x;
	cin >> n >> x;
	
	vi(n, a);
	
	sort(a.begin(), a.end());
	
	int hops = inf;
	
	for(int k : a) {
		if(x % k == 0) {
			hops = min(hops, x/k);
		}
		else {
			int t = x / k;
			int rem = x % k;
			
			if(t == 0) hops = min(hops, 2);
			else hops = min(hops, t + 1);
		}
	}
	
	cout << hops << endl;
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
