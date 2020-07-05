/************************************/
/* NoobM							*/
/* File Name : 1279c.cpp				*/
/* Date : 25.06.2020 19:48:04 +06	*/
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
	int n , m;
	cin >> n >> m;
	
	vii a(n + 5);
	vii pos(n + 5);
	
	rr(i, n) {
		cin >> a[i];
		pos[a[i]] = i;
	}
	
	//sort(a.begin(), a.end());
	
	ll time = 0;
	
	int sorted = -1;
	
	int k = 0;
	
	rr(i, m) {
		int num;
		cin >> num;
		
		if(pos[num] > sorted) {
			sorted = pos[num];
			time = time + (ll)(2 * (ll)(pos[num] - k)) + 1;
		}
		else if(pos[num] < sorted){
			time++;
		}
		
		k++;
		
	}
	
	cout << time << endl;
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
