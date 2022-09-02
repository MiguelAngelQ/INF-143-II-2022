#include <bits/stdc++.h>

using namespace std;

long long f(long long  x, long long n){
    //cuanto no son multiplos de n, de 1 a x
    return x - (x / n);
}

int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int cases;
    cin >> cases;
    while(cases--){
        long long  n, k;
        cin >> n >> k;
        long long  low = 0, high = 2e9;//2*(10**9)
        while(high - low > 1){
            long long  mid = (low + high) / 2;
            if(f(mid, n) <= k)
                low = mid;
            else
                high = mid;
        }
        if(low % n == 0) 
            low -= 1;
        cout << low << "\n";
    }
    return 0;
}