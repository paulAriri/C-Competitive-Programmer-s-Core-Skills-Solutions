#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y, z;
  cin >> x >> y >> z;
  int result = (z == 0) ? 0 : -1;

  vector<int> arr(10000000);
  int i = 1;
  arr[0] = 0; arr[1] = 0; arr[2] = 0;

  while(z > arr[i] && z > arr[i + 1]){
    arr[(2 * i) - 1] = arr[(2 * i) - 2] + x;
    arr[(2 * i)] = arr[(2 * i) - 1] - y;

    if(arr[(2 * i) - 1] == z) { result = (2 * i) - 1; break; }
    if(arr[(2 * i)] == z) { result = (2 * i); break; }
    i++;
  }
  // int i = 1, i1 = 0, i2 = 0, i3 = 0;
  //
  // while(i1 <= z || i2 <= z){
  //     if(z == 0) { result = 0; break; }
  //     i2 = i1 + x;
  //     i3 = i2 - y;
  //     i1 = i2;
  //     i2 = i3;
  //     i3 = 0;
  //
  //     if(i1 == z) { result = i; break; }
  //     if(i2 == z) { result = i + 1; break; }
  //     i++;
  // }
  // your code
  cout << result << endl;
  return 0;
}
