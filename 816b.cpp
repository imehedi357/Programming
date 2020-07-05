/************************************/
/* NoobM							*/
/* File Name : 816b.cpp				*/
/* Date : 20.06.2020 16:51:38 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, 100) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve1() {
	int n, k, q;
	cin >> n >> k >> q;
	
	vii vis(200001, 0);
	
	rr(i, n) {
		int l, r;
		cin >> l >> r;
		
		for(int j = l; j <= r; j++) {
			vis[j]++;
		}
	}
	
	rr(i, q) {
		int a, b;
		cin >> a >> b;
		
		int counter = 0;
		
		for(int j = a; j <= b; j++) {
			if(vis[j] >= k) counter++;
			
		}
		cout << counter << endl;
		
	}
	
}
void solve() {
	int n, k, q;
	cin >> n >> k >> q;
	
	vii vis(200002, 0);
	vii pre(200002, 0);
	
	rr(i, n) {
		int l, r;
		cin >> l >> r;
		
		vis[l]++;
		vis[r + 1]--;
	}
	
	int cc = 0;
	
	rr(i, 200001) {
		if(vis[i] != 0) cc += vis[i];
		vis[i] = cc;
		if(i != 0) {
			if(vis[i] >= k)	pre[i] = pre[i - 1] + 1;
			else pre[i] = pre[i - 1];
		}
	}
	
	rr(i, q) {
		int a, b;
		cin >> a >> b;
		
		cout << pre[b] - pre[a - 1]<< endl;
		
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
