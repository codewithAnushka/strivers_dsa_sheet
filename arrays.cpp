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
    class Solution
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
    };
