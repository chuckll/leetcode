#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;



class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        vector<int> copy;
		for(int i = 0; i < A.size(); i++)
			copy.push_back(A[i]);
		sort(A.begin(),A.end());
		A.erase(unique(A.begin(),A.end()),A.end());
		int n = A.size() - 1;
		sort(copy.begin(),copy.end());
		int num,result;
		for(int i = 0; i < copy.size(); i++)
		{
			if( i == 0)
				num = 1;
			else{
				if(copy[i] == copy[i-1])
				{    
					num++;
					if(num == n)
						result =  copy[i];
				}else
				{
					num = 1;
				}
			}
		}
		return result;
    }
};