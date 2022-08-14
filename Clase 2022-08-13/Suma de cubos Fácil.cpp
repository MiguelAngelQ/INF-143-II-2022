#include <bits/stdc++.h>
using namespace std;
 
int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int cases;
    cin >> cases;
    while(cases--){//cases-- > 0 java
        int n;
        cin >> n;
        bool sw = false;//no se puede representar
        for(int i = 0; i * i * i <= n; i++){
            for(int j = 0; j * j * j <= n; j++){
                for(int k = 0; k * k * k <= n; k++){
                    if(i * i * i + j * j * j + k * k * k == n){
                        sw = true;
                        break;
                    }
                }
            }
        }
        if(sw) cout << n << " se puede expresar como la suma de 3 cubos\n";
        else cout << n << " no se puede expresar como la suma de 3 cubos\n";
    }
    return 0;
}