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

    vi fat(11);

    fat[0] = 1;

    inc_for(1, 11) fat[i] = fat[i - 1] * i; // Store all factorial smaller than or equal 10⁵

    int count = 0;

    dec_for(10, 0) {
        int at = n/fat[i]; // Verify if fat[i] can be a local solution
        count += at;
        n -= fat[i] * at;
    }

    cout << count << endl;

    return 0;
}