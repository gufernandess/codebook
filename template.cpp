#include <bits/stdc++.h>

using namespace std;

/* That´s a code template with some macros and functions for make it easier to code */

#define fo(i, x, n) for(long long int i = x; i < n; i++)

#define f first
#define s second

#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define eb emplace_back

#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define PI 3.1415926535897932384626433832795

#define endl '\n'

typedef long long ll;

typedef vector<int> vi;

typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

typedef map<int, int> mii;
    
typedef set<int> si;
typedef set<char> sc;

string to_upper(string a) { for(int i = 0; i < (int)a.size(); ++i) if(a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A'; return a; }
string to_lower(string a) { for(int i = 0; i < (int)a.size(); ++i) if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A'; return a; }

bool prime(long long a) { if(a == 1) return 0; for(int i = 2; i <= round(sqrt(a)); ++i) if(a % i == 0) return 0; return 1; }

template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

int main() {
    op();

    return 0;
}