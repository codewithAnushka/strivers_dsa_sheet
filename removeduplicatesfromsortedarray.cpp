class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;//first element is unique in itself
        for(int j=1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];//put this element on second index
                i++;//move i forward
            }

        }
        return i+1;

    }
};
