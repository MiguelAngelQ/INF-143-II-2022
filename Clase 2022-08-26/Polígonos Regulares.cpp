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
        //cantidad de vertices m<n
        int n, m;
        cin >> n >> m;
        cout << (n % m == 0? "SI\n" : "NO\n");
    }   
    return 0;
}