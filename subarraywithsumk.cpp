#include <bits/stdc++.h>

int subarraysWithSumK(vector<int> a, int k) {
  int n = a.size();
  int xr = 0;
  // take a map
  map<int, int> mpp;
  // initially we can keep xr++
  mpp[xr]++; // if it is not in the mapit will auto take it 0
  //(0,1) inserted in map

  // iterate on the list
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    xr = xr ^ a[i]; // xor of that element
    // we have xr now we are looking for k
    int x = xr ^ k;
    // look in map how many times this x appears in map
    //  and that will be added to your count
    cnt += mpp[x];
    mpp[xr]++;
  }
  return cnt;
}