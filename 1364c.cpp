/************************************/
/* NoobM							*/
/* File Name : 1364c.cpp				*/
/* Date : 13.06.2020 21:55:26 +06	*/
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
	vii k(n);
	vii b(1000001);
	
	set<int> s;
	
	sor = a;
	s.insert(0);
	
	for(int i = 0; i <= 1000000; i++) {
		b[i] = i;
	}
	
	for(int i = 0; i < n; i++) {
		if(a[i] > i + 1) {
			cout << -1 << endl;
			return;
		}
		
		else {
			s.insert(a[i]);
			auto it = s.begin();
			
		}
		
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
