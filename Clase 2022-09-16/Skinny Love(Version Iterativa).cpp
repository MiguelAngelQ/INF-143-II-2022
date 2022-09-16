#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 10;
int a[N];
int n;

int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        bool sw = false;//no hay triangulo
        for(int i = 1; i <= n; i++){
            if(a[a[a[i]]] == i){
                sw = true;
                break;
            }
        }
        if(sw == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}