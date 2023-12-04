#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define endl '\n'

int main() {
  _

      long long n;
  cin >> n;

  vector<int> fat(11);

  fat[0] = 1;

  for (int i = 1; i < 11; i++)
    fat[i] = fat[i - 1] * i;  // Store all factorial smaller than or equal 10⁵

  int count = 0;

  for (int i = 10; i > 0; i--) {
    int at = n / fat[i];  // Verify if fat[i] can be a local solution
    count += at;
    n -= fat[i] * at;
  }

  cout << count << endl;

  return 0;
}
