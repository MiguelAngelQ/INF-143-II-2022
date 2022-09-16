#include <bits/stdc++.h>
using namespace std;
const int N = 15;//public static int N = 15;
 
int n, m;
char M[N][N];
bool vis[N][N];//visitdo, xq cada celda debe visitarse maximo una vez
 
int f(int x, int y){
    //caso base, verificar si se alio del limite
    if(x < 0 || x >= n || y < 0 || y >= m || M[x][y] == '#' || vis[x][y] == true)
        return 0;
    vis[x][y] = true;
    int ans = 1;//porque la celda en la que estoy cuenta
    ans += f(x + 1, y);
    ans += f(x - 1, y);
    ans += f(x, y + 1);
    ans += f(x, y - 1);
 
    return ans;
}
 
int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;
        int posx, posy;//dondo yo inicio(@)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                vis[i][j] = false;
                cin >> M[i][j];
                if(M[i][j] == '@'){//determinar mi posicion
                    posx = i;
                    posy = j;
                }
            }
        cout << f(posx, posy) << "\n";
 
    }
    return 0;
}