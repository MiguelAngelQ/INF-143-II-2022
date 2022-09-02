#include <bits/stdc++.h>

using namespace std;

int main(){  
    int n;
    while(cin >> n){                            //1
        cout << "Divisores de " << n << ":";
        for(int i = 1; i <= n; i++){            //n + 1
            if(n % i == 0){                     //n
                cout << " " << i;               //n
            }
        }
        cout << "\n";                           //1
    }
    /*
    t(n) = 1 + n + 1 + n + n + 1
    t(n) = 3n + 3
    t(n) E O(n) (lineal)
    */
    return 0;
}