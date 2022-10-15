#include <bits/stdc++.h>
using namespace std;

int main(){ 
    long long n;
    cin >> n;
    long long x = (-1 + sqrt(1 + 8 * n)) / 2;
    if((x * (x + 1)) / 2 == n) cout << x << "\n";
    else cout << n - (x * (x + 1)) / 2 << "\n";
    return 0;
}