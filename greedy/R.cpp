#include <bits/stdc++.h>

using namespace std;

#define inc_for(a, b) for(long long i = a; i < b; i++)
#define dec_for(a, b) for(long long i = a; i > b; i--)

#define f first
#define s second
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define eb emplace_back
#define mk make_pair

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define endl '\n'

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef map<int, int> mii;  
typedef set<int> si;
typedef set<char> sc;

int main() { _

    ll n; cin >> n;

    vector<pii> v(n);

    ll l, r;

    inc_for(0, n) {
        cin >> l >> r;
        v[i] = mk(l, r);
    }

    int ans = 0, end = -1;

    inc_for(0, n) {
        if(v[i].f > end) {
            end = v[i].s;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}