#include <bits/stdc++.h>
using namespace std;

int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], mx[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int maximo = 0;
        for(int i = n - 1; i >= 0; i--){
            maximo = max(maximo, a[i]);
            mx[i] = maximo;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != mx[i]){
                ans += 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}