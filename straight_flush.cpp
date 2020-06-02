#include <bits/stdc++.h>
using namespace std;

int ranking(char ch){
  if(!isdigit(ch)){
    switch(ch){
      case 'A': return 14;
      case 'K': return 13;
      case 'Q': return 12;
      case 'J': return 11;
      case 'T': return 10;
    }
  }

  return (ch - '0');
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string card;
  char rank[5], suit = '1';
  int rankNum[5];

  for(int i = 0; i < 5; ++i){
    cin >> card;
    rank[i] = card[0];

    if(suit == '1') { suit = card[1]; continue; }
    if(card[1] != suit) { cout << "NO"; return 0; }
  }

  for(int i = 0; i < 5; ++i){ rankNum[i] = ranking(rank[i]); }

  sort(rankNum, rankNum + 5);

  for(int i = 0; i < 4; ++i){
    if(rankNum[i] + 1 != rankNum[i + 1]){
      if (i < 3 || rankNum[0] != 2 || rankNum[4] != 14){
        cout << "NO"; return 0;
      }
    }
  }

  cout << "YES";
  return 0;
}
