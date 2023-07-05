class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //creating a frequency map basically a vector of 256
        //string can have 256 different characters
        vector<int> mpp(256, -1);
        
        int left = 0, right = 0;//initially left and right is 0
        int n = s.size();//size of string
        int len = 0;//len of longest substring is initially 0

        // iterate till last index
        while(right < n){
            //if char at right index exists or not
            if(mpp[s[right]] != -1) 
            //if it does exist take it and do +1
            //but don't update it until it is greater than left
                left = max(mpp[s[right]] +1,left);

            mpp[s[right]] = right;//update the current index lastly inright  in hash map
//find len of curr substring = right - left +1
//max=len of prev substr
            len = max(len, right - left +1);
            right++;//move right to next index

        }
        return len;//return the length of longest substr
    }
};