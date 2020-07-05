/************************************/
/* NoobM							*/
/* File Name : greedy.cpp				*/
/* Date : 18.06.2020 15:27:21 +06	*/
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
	int n;
	cin >> n;
	
	vi(2*n, a);
	
	int smallest = inf;
	int biggest = -inf;
	
	rr(i, 2*n) {
		if(i != 0){
			if(a[i] < smallest) smallest = a[i];
			if(a[i] > biggest) biggest = a[i];
		}	
	}
	
	int am = a[0];
	
	double gav = (am + biggest) / 2.0;
	double sav = (am + smallest) / 2.0;
	int gcounter = 1;
	
	int scounter = 0;
	
	for(int i = 1; i < 2 *n ;i++) {
		if(a[i] != biggest)if(a[i] > gav) gcounter++;
		if(a[i] != smallest)if(a[i] <= sav) scounter++;
	}
	cout << gcounter << " "	<< scounter << endl;
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
