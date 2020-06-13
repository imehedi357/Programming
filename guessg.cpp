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
	
	//int counter = 1;
	
	ll y = 1;
	
	cout << 1 << endl;
	cin >> ans;
	if(ans == 'E') return;
	
	cout << n << endl;
	cin >> ans;
	if(ans == 'E') return;
	
	//while(ans != 'L') {
	//	cout << 1 << endl;
	//	cin >> ans;
	//	counter++;		
	//}
	
	map<char, int> mp;
	
	
	
	ll high = n;
	ll low = 1;
	
	//int f = 2;
	
	bool f = false;
	
	while(ans != 'E') {
		mp['G'] = 0;
		mp['L'] = 0;
		
		
		y = (high + low)/2;
		
		//cout << y << endl;
		//cin >> ans;
			
		//ans2 = ans;
		
		for(int i = 0; i < 10; i++) {
			cout << y << endl;
			cin >> ans;
			mp[ans]++;
		}
		
		if(mp['L'] > mp['G']) {			
			high = y - 1;
		}
		else if(mp['L'] < mp['G']) {
			low = y + 1;			
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
