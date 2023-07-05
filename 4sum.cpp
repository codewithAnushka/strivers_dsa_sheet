vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    //i start with 0
    for(int i=0; i<n; i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1; j<n; j++){
            //for no duplicates
            if(j != i+1 && nums[j] == nums[j-1]) continue;
            int k=j+1;//k start
            int l=n-1;//l will start from last index
            while(k<l){
                long long sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum == target){
                    vector<int> temp={nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;l--;
                    //dont cross over all the duplicates
                    while(k<l && nums[k] == nums[k-1]) k++;
                    while(k<l && nums[l] == nums[l+1]) l--;
                }
                else if(sum<target) k++;
                else l--;
            }
        }
    }
    return ans;
}