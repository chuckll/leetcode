#include<stdio.h>
#include<vector>
using namespace std;




//class Solution {
//public:
//    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//		 int n = matrix[0].size();
//		 for(int i = m-2; i >= 0; i--)
//		 {
//			 int num = matrix[i][0];
//			 for(int j = i+1, k = 1; j < m && k < n; j++,k++)
//			 {
//				 if(matrix[j][k] != num)
//					 return false;
//			 }
//		 }
//		 for(int j = 1; j < n-1; j++)
//		 {
//			 int num = matrix[0][j];
//			 for(int i = 1, k = j+1; i < m && k < n; i++,k++)
//			 {
//				 if(matrix[i][k] != num)
//					 return false;
//			 }
//		 }
//		 return true;
//    }
//};


class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
         int m = matrix.size();
		 int n = matrix[0].size();
		 for(int i = 1; i < m; i++)
		 {
			 for(int j = 1; j < n; j++)
			 {
				 if(matrix[i][j] != matrix[i-1][j-1])
					 return false;
			 }
		 }
		 return true;
    }
};