#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9+7;
const ld eps = 1e-9;
const ll maxn = 1e5;
const ll inf = 1e15;
const ll minf = -inf;

#define mp make_pair
#define pb push_back
#define endl "\n"

mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

//generate from [a,b]
ll gen(ll a, ll b) {
    return a + rng() % (b - a + 1);  // random number in range [a, b]
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifdef EPSILON
    freopen("input.txt", "w", stdout);
    #endif

    ll t = gen(100, 100);  // t will always be 100 because range [100, 100]
    cout << t << endl;

    while(t--) {
        // Generate and print random numbers between 1 and 100 for each test case
        cout << gen(1, 100) << endl;
    }

    return 0;
}
