#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
		if(words.size() == 1)
			return true;
		for(int i = 1; i < words.size(); i++)
		{
			string s1 = words[i-1];
			string s2 = words[i];

			int minSize = min(s1.size(),s2.size());
			int j;
			for(j = 0; j < minSize; j++)
			{
				int index1,index2;
				if(j < s1.size() && j < s2.size())
				{
					index1 = ToIndex(s1[j],order);
					index2 = ToIndex(s2[j],order);
					if(index1 > index2)
						return false;
					else if(index1 < index2)
					{
						break;
					}
				}
			}
			if(j < s1.size() && j == s2.size())
			{
				return false;
			}
		}
		return true;
    }


	int ToIndex(char c, string order)
	{
		int ans;
		for(int i = 0; i < order.size(); i++)
		{
			if(order[i] == c)
			{
				ans = i;
				break;
			}
		}
		return ans;
	}

};