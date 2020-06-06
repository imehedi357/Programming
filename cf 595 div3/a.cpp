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
        int n;
        cin >> n;

        vina;

        sort(a.begin(), a.end());


        int ans = 1;
        for(int i = 1; i < n; i++) {
            if(a[i] - a[i - 1] == 1) ans = 2;
        }

        int counter = 0;
        int temp = a[0];
        for(int i = 0; i < n; i++) {
            

            if(a[i] == temp) {
                counter++;
                ans = max(ans, counter);
            }
            else {
                temp = a[i];
                counter = 1;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
