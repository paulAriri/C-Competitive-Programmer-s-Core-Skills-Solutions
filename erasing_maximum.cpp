#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
      cin >> a[i];

  vector<int> result;

  // your code
  int idx = 0, cnt = 0;
  int maxEl = *max_element(a.begin(), a.end());

  for(int i = 0; i < a.size(); ++i) {
      if(a[i] == maxEl){
          idx = i;
          cnt++;
      }
      if(cnt == 3) break;
  }

  for(int i = 0; i < a.size(); ++i){
      if(i != idx) result.push_back(a[i]);
  }

  for (int i = 0; i < result.size(); ++i) {
      if (i != 0) cout << ' ';
      cout << result[i];
  }

  return 0;
}
