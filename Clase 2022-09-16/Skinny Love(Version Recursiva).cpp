#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 10;
int a[N];
int n;

bool f(int i){
    if(i == n) return false;
    if(a[a[a[i]]] == i) return true;
    return f(i + 1);
}

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
        if(f(1) == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}