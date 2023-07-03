#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
    //transpose the mat
    int n=mat.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    // reverse every row
   
    for(int i=0; i<n; i++){
        //row is mat[i]
        reverse(mat[i].begin(), mat[i].end());
    }
    }
};