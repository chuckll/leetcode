#include<stdio.h>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;



class Solution {
public:

    int numSpecialEquivGroups(vector<string>& A) {
        int count = A.size();
		unordered_map<string,int> result;
		for(int i = 0; i < count; i++)
		{
			string odd = "",even = "";
			for(int j = 0; j < A[i].size(); j += 2)
			{
				even.push_back(A[i][j]);
			}
			for(int j = 1; j < A[i].size(); j += 2)
			{
				odd.push_back(A[i][j]);
			}
			sort(even.begin(),even.end());
			sort(odd.begin(),odd.end());
			++result[odd+even];
		}
		return result.size();
    }
};