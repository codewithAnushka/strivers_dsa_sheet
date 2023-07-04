#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
  int cnt1 = 0, cnt2 = 0;
  int elem1 = INT_MIN;
  int elem2 = INT_MIN;
  int n = v.size();
  for (int i = 0; i < n; i++) {
    if (cnt1 == 0 && elem2 != v[i]) {
      cnt1 = 1;
      elem1 = v[i];
    } else if (cnt2 == 0 && elem1 != v[i]) {
      cnt2 = 1;
      elem2 = v[i];
    } else if (v[i] == elem1)
      cnt1++;
    else if (v[i] == elem2)
      cnt2++;
    else {
      cnt1--, cnt2--;
    }
  }
  vector<int> ls;
  cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; i++) {
    if (elem1 == v[i])
      cnt1++;
    if (elem2 == v[i])
      cnt2++;
  }
  int mini = (int)(n / 3) + 1;
  if (cnt1 >= mini)
    ls.push_back(elem1);
  if (cnt2 >= mini)
    ls.push_back(elem2);
  sort(ls.begin(), ls.end());
  return ls;
}