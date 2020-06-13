/************************************/
/* NoobM							*/
/* File Name : chficrm.cpp				*/
/* Date : 08.06.2020 20:48:43 +06	*/
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
	
	int flag = 0;
	
	//int bank = 0;
	
	map <int, int> m;
	m[5] = 0;
	m[10] = 0;
	m[15] = 0;
	
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		
		//int change = (x - 5);
		if(x == 5) {
			m[5]++;			
		}
		else if (x == 10) {
			if(m[5] < 1) flag = 1;
			else {
				m[5]--;
				m[10]++;
			}
		}
		else if (x == 15) {
			if(m[5] < 2 && m[10] < 1) flag = 1;
			else if (m[10] >= 1) {
				m[10]--;
				m[15]++;
			}
			else if (m[5] >= 2) {
				m[5]--;
				m[5]--;
				m[15]++;
			}
			
			
		}
		
	}
	
	if(flag == 1) cout << "NO" << endl;
	else cout << "YES" << endl;
	
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
