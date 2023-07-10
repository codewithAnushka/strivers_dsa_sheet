#include <bits/stdc++.h>
#include<vector>
using namespace std;

void func(int ind, int sum, vector<int> &arr, int n, vector<int>&sumSubset)
{
	if(ind == n){
		sumSubset.push_back(sum);
		return;
	}
	func(ind+1, sum+arr[ind], arr, n, sumSubset);
	func(ind+1, sum, arr, n, sumSubset);
}
vector<int> subsetSum(vector<int> &arr){
		int n=arr.size();
		vector<int> sumSubset;
		func(0,0,arr,n,sumSubset);
		sort(sumSubset.begin(), sumSubset.end());
		return sumSubset;
}