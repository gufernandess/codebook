#include <bits/stdc++.h>

#include <algorithm>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define pb push_back
#define eb emplace_back

#define endl '\n'

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<int, int> mii;

int main() {
  _

      long long t;
  cin >> t;

  long long x, y;

  for (int i = 0; i < t; i++) {
    cin >> y >> x;

    long long maxv = max(x, y);
    long long sqr = (maxv - 1) * (maxv - 1);

    if (maxv % 2 == 0) {
      if (x > y)
        cout << sqr + y << endl;
      else
        cout << (maxv * maxv) - x + 1 << endl;
    }

    else {
      if (x > y)
        cout << (maxv * maxv) - y + 1 << endl;
      else
        cout << sqr + x << endl;
    }
  }

  return 0;
}
