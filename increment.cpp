#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string n;
  cin >> n;
  int x, y;
  y = 0; x = n.size();

  for(char ch : n){
    if(ch != '9') { y = 1; break; }
  }

  if(y) cout << x;
  else cout << x + 1;

  return 0;
}
