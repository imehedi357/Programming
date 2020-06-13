/************************************/
/* NoobM							*/
/* File Name : xystr.cpp				*/
/* Date : 08.06.2020 19:50:11 +06	*/
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
	//int n;
	//cin >> n;
	string s;
	cin >> s;
	
	int n = s.size();
	
	vector<bool> vis(n, 0);
	
	
	
	int counter = 0;
	
	for(int i = 1; i < n; i++) {
		//if(vis[i]) continue;
		//else {
			if(s[i] == 'x') {
				if(s[i - 1]  == 'y' && !vis[i - 1]) {
					counter++;
					vis[i] = true;
					vis[i - 1] = true;
				}
			} 
			
			else {
				if(s[i - 1]  == 'x' && !vis[i - 1]) {
					counter++;
					vis[i] = true;
					vis[i - 1] = true;
				}
			}
			
		//}
		
	}
	
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
