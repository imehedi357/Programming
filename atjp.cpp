/************************************/
/* NoobM							*/
/* File Name : atjp.cpp				*/
/* Date : 27.06.2020 19:24:07 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

vector<long long> divisors(10000001, 0);

void sieve(int N){ 	
  	for(int p=1; p <=N; p++) {
        for(int i=p ; i<=N; i+=p)
            divisors[i]++;
    }
  	
}

void solve() {
	int n;
	cin >> n;
	
	sieve(n);
	
	ll counter = 0;
	
	for(int i = 1; i <= n; i++) {
		counter += (i * divisors[i]);
	}
	
	cout << counter << endl;
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
