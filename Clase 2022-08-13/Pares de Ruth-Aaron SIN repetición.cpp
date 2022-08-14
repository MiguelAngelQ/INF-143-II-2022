#include <bits/stdc++.h>
using namespace std;
 
const int N = 1000000 + 10;//public static vint N = 1...; 
int sumFactor[N];

void criba(){
    for(int i = 2; i < N; i++)
        sumFactor[i] = 0;//suma factores primos 0
    for(int i = 2; i < N; i++){
        if(sumFactor[i] == 0){
            for(int j = i; j < N; j+= i){
                sumFactor[j] += i;//sumFactor[j] = sumFactor[j] + i;
            }
        }
    }
}

int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    criba();
    int a, b;
    while(cin >> a >> b){
        for(int i = a; i <= b; i++){
            if(sumFactor[i] == sumFactor[i + 1])
                cout << i << " " << i + 1 << "\n";
        }
    }
    return 0;
}