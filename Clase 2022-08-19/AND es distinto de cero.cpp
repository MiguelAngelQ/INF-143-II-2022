#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define clr(a,h) memset(a, (h), sizeof(a))
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define mp make_pair
#define ps insert
#define ll long long
#define ull unsigned long long
#define PI acos(-1)
#define F first
#define S second
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const int N = 200000 + 10;
int pref[N][18];
 
void init(){
    for(int i = 1; i < N; i++)
        for(int j = 0; j < 18; j++)
            pref[i][j] = pref[i - 1][j] + ((i & (1 << j))? 1 : 0);
}
 
void task(){
    int l, r, ans = -1e9;
    cin >> l >> r;
    for(int j = 0; j < 18; j++)
        ans = max(ans, pref[r][j] - pref[l - 1][j]);
    cout << (r - l + 1) - ans << "\n";
}
  
int main(){  
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    init();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        task();
    }
    return 0;
}