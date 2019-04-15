#include<stdio.h>
#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> res;

		for(int i = 0; i < input.size(); i++)
		{
			char c = input[i];
			if(c == '+' || c == '-' || c == '*')
			{
				vector<int> res1 = diffWaysToCompute(input.substr(0,i));
				vector<int> res2 = diffWaysToCompute(input.substr(i+1));

				for(int j = 0; j < res1.size(); j++)
				{
					for(int k = 0; k < res2.size(); k++)
					{
						if(c == '+')
							res.push_back(res1[j]+res2[k]);
						if(c == '-')
							res.push_back(res1[j]-res2[k]);
						if(c == '*')
							res.push_back(res1[j]*res2[k]);
					}
				}
			}
		}

		if(res.empty())
		{
			res.push_back(stoi(input));
		}

		return res;

    }
};