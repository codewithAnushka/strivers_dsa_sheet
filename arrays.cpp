#include <iostream>
#include <vector>
using namespace std;

// Better solutuion
//  class Solution
// {
// public:
//     void setZeroes(vector<vector<int>> &matrix)
//     {
//         int rowSize = matrix.size();
//         int colSize = matrix[0].size();

//         vector<int> col(colSize, 0);
//         vector<int> row(rowSize, 0);

//         for (int i = 0; i < rowSize; i++)
//         {
//             for (int j = 0; j < colSize; j++)
//             {
//                 if (matrix[i][j] == 0)
//                 {
//                     row[i] = 1;
//                     col[j] = 1;
//                 }
//             }
//         }
//         for (int i = 0; i < rowSize; i++)
//         {
//             for (int j = 0; j < colSize; j++)
//             {
//                 if (row[i] || col[j])
//                 {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }

// optimal solution
/* class Solution
 {
 public:
     void setZeroes(vector<vector<int>> &matrix)
     {

         int n = matrix.size();
         int m = matrix[0].size();

         // Declaring two boolean variables firstColZero and firstRowZero.
         bool firstColZero = false, firstRowZero = false;

         // Setting firstColZero to true if any element in first column is zero.
         for (int i = 0; i < n; i++)
         {
             if (matrix[i][0] == 0)
             {
                 firstColZero = true;
                 break;
             }
         }

         // Setting firstRowZero to true if any element in first row is zero.
         for (int j = 0; j < m; j++)
         {
             if (matrix[0][j] == 0)
             {
                 firstRowZero = true;
                 break;
             }
         }

         // Setting values for each row and column to be zero or not.
         for (int i = 1; i < n; i++)
         {
             for (int j = 1; j < m; j++)
             {
                 if (matrix[i][j] == 0)
                 {
                     matrix[i][0] = matrix[0][j] = 0;
                 }
             }
         }

         // If any element of first row is zero then that complete
         // column should be zero and vice-versa.
         for (int i = 1; i < n; i++)
         {
             for (int j = 1; j < m; j++)
             {
                 if (matrix[i][0] == 0 || matrix[0][j] == 0)
                 {
                     matrix[i][j] = 0;
                 }
             }
         }

         // Setting first row to zero if firstRowZero is true.
         if (firstColZero)
         {
             for (int i = 0; i < n; i++)
             {
                 matrix[i][0] = 0;
             }
         }

         // Setting first column to zero if firstColZero is true.
         if (firstRowZero)
         {
             for (int j = 0; j < m; j++)
             {
                 matrix[0][j] = 0;
             }
         }
     }
 };*/

// pascal triangle
/*vector<vector<long long int>> printPascal(int n)
{
  // Write your code here.
  vector<vector<long long int>> res;
  for(int i=0; i<n; i++){
    vector<long long int>p;
    for(int j=0; j<=i; j++){
      if(j==0 || j==i) p.push_back(1);
      else{
        p.push_back(res[i-1][j-1]+res[i-1][j]);
      }
    }
    res.push_back(p);
  }
  return res;
}*/

// kadane's algorithm-->maximum subaaray sum
/*long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0,maxi = LONG_MIN;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        //every time we
        // get inside loop we will add to the sum

        if(sum > maxi){
            maxi = sum;
        }

        if(sum<0){
            sum=0;//reinitialize sum
            //  to 0 if it is going less than 0
        }
    }
    if(maxi<0) maxi=0;
    return maxi;

}*/

// sort 0,1,2
/*int low=0, mid=0, high=n-1;
//keep moving until we have unsorted section
while(mid<=high){
   if(arr[mid] == 0){
      swap(arr[low], arr[mid]);
      low++;
      mid++;

   }
   else if(arr[mid] == 1){
      mid++;
   }
   else{
      swap(arr[mid], arr[high]);
      high--;
   }
}*/

// buuy sell stock
int maximumProfit(vector<int> &prices)
{

    int mini = prices[0];
    int maxProfit = 0;
    int n = prices.size();
    for (int i = 0; i < n; i++)
    {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}