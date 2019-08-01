#include<stdio.h>
#include<vector>
#include<string>
using namespace std;



//DFS+Backtracking
class Solution {
public:

	void dfs(string digits,int k,vector<vector<char>> nums,vector<string>& res,string one_res)
	{
		if(k == digits.length())
		{
			res.push_back(one_res);
			return;
		}
		int number = digits[k] - '1' + 1;
		for(int i = 0; i < nums[number].size(); i++)
		{
			string temp = one_res;
			temp += nums[number][i];
			dfs(digits,k+1,nums,res,temp);
		}
	}

    vector<string> letterCombinations(string digits) {
        vector<string> res;
		if(digits.length() == 0)
			return res;
		vector<vector<char>> nums;
		char j = 'a';
		for(int i = 0; i <= 9; i++)
		{
			vector<char> temp;
			if(i == 0 || i == 1)
				temp.push_back('#');
			else if(i == 7 || i == 9)
			{
				for(int k = 0; k < 4; k++,j++)
				{
					temp.push_back(j);
				}
			}else{
				for(int k = 0; k < 3; k++,j++)
				{
					temp.push_back(j);
				}
			}
			nums.push_back(temp);
		}
		string s;
		dfs(digits,0,nums,res,s);
		return res;
    }
};