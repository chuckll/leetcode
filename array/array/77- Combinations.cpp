#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
		vector<vector<int>> res;
		vector<int> f;
		combines(res,f,n,k,0);
	    return res;
    }


	void combines(vector<vector<int>> &res,vector<int> f,int n,int k,int index)
	{
		if(f.size() == k)
		{
			res.push_back(f);
			return;
		}
		
		for(int i = index+1; i <= n; i++)
		{
			f.push_back(i);
			combines(res,f,n,k,i);
			f.pop_back();
		}
	}
};