#include <bits/stdc++.h>

#define rep(i, a, b) \
    for (int i = int(a); i < int(b); i++)
#define rr(i, b) \
    for (int i = 0; i < int(b); i++)
#define vina vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;

    while(t--) {
        long long k, d0, d1;
        cin >> k >> d0 >> d1;
        
        k -= 3;
        
        long long n = d0 + d1;
        
        long long twos = (2 * n) % 10;
        long long fours = (4 * n) % 10;
        long long sixes = (6 * n) % 10;
        long long eights = (8 * n) % 10;
        
        long long total = n;
        if(k == 0) total = n + n % 10;
        
        total = ((k)/4) * (twos + fours + sixes + eights);
        total += n + n % 10;
        
        if(k % 4 == 2) {
			total += n + twos + fours;
			
		}
		else if(k % 4 == 3) {
			total += twos + fours + eights;
		}
		else if(k % 4 == 1) {
			total += twos;
		}
		
        
        if(total % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
