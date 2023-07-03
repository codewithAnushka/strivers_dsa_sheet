//bruteforce
#include<iostream>
#include <vector>
#include<stdlib.h>
using namespace std;
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
 /* int n = arr.size();
  // sort the array
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans; // store all answers

  // iterate from first to last
  for (int i = 0; i < n; i++) {
    int start = arr[i][0];
    int end = arr[i][1];

    // if we have some prev interval- jo ki already
    // interval k andr present hai
    //(2,4) is already a part of (1,6)
    if (!ans.empty() && end <= ans.back()[1]) {
      // not empty and my end is lying inside ans
      continue; // no need to do anything just go ahead
    }

    for (int j = i + 1; j < n; j++) {
      if (arr[j][0] <= end) {
        end = max(end, arr[j][1]);
        // 2,4 will update (1,3) to(1,4))
        // but (15,18 ) will not be updated
        //  by (16,17) as max of 17,18n is 18
      } else {
        break;
      }
    }
    // start and end will be updated with new intervals
    ans.push_back({start, end});
  }

  return ans;
}*/

int n = arr.size();
  // sort the array
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans; // store all answers
  for (int i = 0; i < n; i++) {
   if(ans.empty() || arr[i][0] > ans.back()[1]){
	   ans.push_back(arr[i]);
   }
   else{
	   ans.back()[1]=max(ans.back()[1], arr[i][1]);
   }

  }
  return ans;
}