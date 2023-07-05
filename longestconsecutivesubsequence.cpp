int n = a.size();
  // if size is empty there is no longer sequence
  if (n == 0)
    return 0;
  // or else we will have minimum of 1 for sure
  int longest = 1;
  // declare unordered set
  unordered_set<int> st;
  // iterate in the list
  for (int i = 0; i < n; i++) {
    st.insert(a[i]);
  }//-->O(1)
  // iterate in the set
  for (auto it : st) {
    // find if u are the 1st elem then previous
    //  one will not exist in the list
    if (st.find(it - 1) == st.end()) {
      int count = 1; // u are part of sequence
      int x = it;    // first elem
      // lets look if you have next that is x+1
      while (st.find(x + 1) != st.end()) {
        x = x + 1; // if u have  go to next sequence
        count = count + 1;
      }
      longest = max(longest, count);
    }
  }

  return longest;