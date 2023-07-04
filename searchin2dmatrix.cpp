bool searchMatrix(vector<vector<int>>& mat, int target) {
    //if mat is empty return false
    if(!mat.size()) return false;

    //compute size of row
    int n=mat.size();
    //compute size of col
    int m=mat[0].size();

    //perform imaginary binary search
    int low = 0;//starting index
    int high = (n*m)-1;//last index

    while(low <= high){
        int mid = (low +(high-low)/2);
        if(mat[mid/m][mid%m] == target){
            return true;
        }
        if(mat[mid/m][mid%m] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;

}