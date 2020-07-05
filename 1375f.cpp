/************************************/
/* NoobM							*/
/* File Name : 1375g.cpp				*/
/* Date : 05.07.2020 04:00:49 +06	*/
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
	ll a, b, c;
	//ll p, q;
	cin >> a >> b >> c;
	
	cout << "First" << endl;
	
	ll mx = max(a, b);
	mx = max(mx, c);
	//int mxn = 1;
	
	int ans;
	
	if(mx == c) {
		cout << 2 * c - a - b << endl;
		cin >> ans;
		if(ans == 0 || ans == -1) return;
		if(ans == 1) {
			cout << abs(c - b) << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;		
		}
		if(ans == 2) {
			cout << abs(c - a) << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;		
		}
		if(ans == 3) {
			c += (2 * c - a - b);
			cout << 2 * c - a - b << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;
			if(ans == 1) {
				cout << abs(c - b) << endl;
				cin >> ans;
				if(ans == 0 || ans == -1) return;		
			}
			if(ans == 2) {
				cout << abs(c - a) << endl;
				cin >> ans;
				if(ans == 0 || ans == -1) return;		
			}	
		}
	}
	else if(mx == b) {
		cout << 2 * b - c - a << endl;
		cin >> ans;
		if(ans == 0 || ans == -1) return;
		if(ans == 1) {
			cout << abs(c - a) << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;		
		}
		if(ans == 3) {
			cout << abs(c - b) << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;		
		}
		if(ans == 2) {
			b += (2 * b - a - c);
			cout << 2 * b - a - c << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;
			if(ans == 1) {
				cout << abs(c - b) << endl;
				cin >> ans;
				if(ans == 0 || ans == -1) return;		
			}
			if(ans == 3) {
				cout << abs(a - b) << endl;
				cin >> ans;
				if(ans == 0 || ans == -1) return;		
			}	
		}
	}
	else {
		cout << 2 * a - c - b << endl;
		cin >> ans;
		if(ans == 0 || ans == -1) return;
		if(ans == 2) {
			cout << abs(c - a) << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;		
		}
		if(ans == 3) {
			cout << abs(a - b) << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;		
		}
		if(ans == 1) {
			a += (2 * a - c - b);
			cout << 2 * a - c - b << endl;
			cin >> ans;
			if(ans == 0 || ans == -1) return;
			if(ans == 2) {
				cout << abs(a - c) << endl;
				cin >> ans;
				if(ans == 0 || ans == -1) return;		
			}
			if(ans == 3) {
				cout << abs(a - b) << endl;
				cin >> ans;
				if(ans == 0 || ans == -1) return;		
			}	
		}
	}
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
