class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //positioning method
    while(nums[0]!=nums[nums[0]])
    //3 element not equal hai 3index position par jo pada hai uske, means 3 apni position par nhgi hai to swap kr dege
    {
swap(nums[0],nums[nums[0]]);
//swap krte jayge tab tak jab tak ki nums[0]==nums[nums[0]] na ho jaay jab equal ho jay to break kardo
    }
    return nums[0];
    }
};