#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
const ll mod  = 1e9+7;
const ld eps  = 1e-9 ;
const ll maxn = 1e5+1;
const ll inf  = 5e18 ;
const ll minf = -inf ;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
bool solve()
{
    ll n;
    cin >> n;
    
    if(n % 2 == 0 && n > 3)
        return true;
    return false;    
}
 
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    #ifdef EPSILON
    freopen("input.txt","r",stdin);
    freopen("output_brute.txt","w",stdout);
    freopen("error_brute.txt","w",stderr);
    #endif
 
    ll t=1;
    //cin >> t;
 
    while(t--)
    {
        if(solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
} 