#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N], mx[N];
int n;

int f(int i){
    if(i == n) return 0;
    if(a[i] != mx[i]){
        return f(i + 1) + 1;
    }else{
        return f(i + 1);
    }
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
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int maximo = 0;
        for(int i = n - 1; i >= 0; i--){
            maximo = max(maximo, a[i]);
            mx[i] = maximo;
        }
        cout << f(0) << "\n";
    }
    return 0;
}