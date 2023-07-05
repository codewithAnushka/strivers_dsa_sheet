#include <bits/stdc++.h>

string read(int n, vector<int> book, int target) {
  // take a map
  map<int, int> mpp;
  // iterate through array
  for (int i = 0; i < n; i++) {
    int a = book[i]; // first element is this
    // how much more we require
    int more = target - a;
    //if more already there in map
    if (mpp.find(more) != mpp.end()) {
      return "YES";//return yes
    }
    // else keep on going
    mpp[a] = i;
  }
  return "NO";//not found
}
//T.C = O(N * logN)