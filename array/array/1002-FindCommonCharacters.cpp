#include<stdio.h>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
		map<char,int> mp;
		vector<string> res;
		map<char,int>::iterator iter;
		vector<char> deleteChar;
		int n = A.size();
		for(int i = 0; i < A[0].size(); i++)
		{
			if(i == 0)
			{
				mp.insert(pair<char,int>(A[0][i],1));
			}else{
				iter = mp.find(A[0][i]);
				if(iter != mp.end())
				{
					iter->second++;
				}else{
					mp.insert(pair<char,int>(A[0][i],1));
				}
			}
		}
		for(iter = mp.begin(); iter != mp.end(); iter++)
		{
			char c = iter->first;
			int num = iter->second;
			for(int i = 1; i < n; i++)
			{
				int number = 0;
				for(int j = 0; j < A[i].size(); j++)
				{
					if(A[i][j] == c)
						number++;
				}
				if(number != num)
				{
					deleteChar.push_back(c);
					break;
				}
			}
		}

		for(iter = mp.begin(); iter != mp.end(); iter++)
		{
			char c = iter->first;
			bool isDelete = false;
			for(int i = 0 ; i < deleteChar.size(); i++)
			{
				if(deleteChar[i] == c)
					isDelete = true;
			}
			if(isDelete == false)
			{
				for(int j = 0; j < iter->second; j++)
					res.push_back(iter->first+"");
			}
		}

		return res;
    }
};



