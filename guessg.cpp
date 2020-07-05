/************************************/
/* NoobM							*/
/* File Name : guessg.cpp				*/
/* Date : 13.06.2020 01:50:24 +06	*/
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
	
	char ans;
	char ans2;
	char ans3;
	
	int y = 1;
	
	cout << 1 << endl;
	cin >> ans;
	if(ans == 'E') return;
    
    cout << n << endl;
    cin >> ans;]
    if(ans == 'E') return;

	
	int high = n;
	int low = 1;
	
	//int f = 2;
	
	bool f = false;
	bool ok = false;
	
	while(ans != 'E') {
		//if(f % 2 == 0) 
		
        y = low + (high - low)/2;
        cout << n << endl;
        cin >> ans3;
		
		cout << y << endl;
		cin >> ans;
		
		if(ans == 'E') break;
		
		cout << 1 << endl;
		cin >> ans2;
		
		if(ans2 == 'L' || ans3 == 'G') {
			if(ans == 'G') {
				low = y + 1;
			}
			else if(ans == 'L') {
				high = y - 1;
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
