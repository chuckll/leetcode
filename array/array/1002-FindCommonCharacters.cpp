#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> res;
		int a[26] = {0},b[26] = {0};
		for(int i = 0; i < A.size(); i++)
		{
			for(int j = 0; j < A[i].size(); j++)
			{
				int index = A[i][j] - 'a';
				a[index]++;

				if(i == 0)
					b[index]++;
			}
			




		}
    }
};