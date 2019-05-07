
#include<stdio.h>
#include<vector>
using namespace std;

//struct Interval {
//     int start;
//     int end;
//     Interval() : start(0), end(0) {}
//     Interval(int s, int e) : start(s), end(e) {}
// };
 
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        
		vector<vector<int>> res;
		int count = 0;
		vector<int> temp(2);
		for(int i = 0; i < A.size() && count < B.size();)
		{
			if(A[i][1] < B[count][0])
			{
				i++;
			}else if(A[i][0] > B[count][1])
			{
				count++;
			}else if(A[i][1] > B[count][1])
			{
				temp[0] = max(A[i][0],B[count][0]);
				temp[1] = B[count][1];
				res.push_back(temp);
				count++;
			}else{
				temp[0] = max(A[i][0],B[count][0]);
				temp[1] = A[i][1];
				res.push_back(temp);
				i++;
			}
		}
		return res;
    }
};