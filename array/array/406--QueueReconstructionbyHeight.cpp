#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
	static bool cmp(vector<int> a,vector<int> b)
	{
		if(a[0] != b[0])
			return a[0] > b[0];
		else
			return a[1]  < b[1];
	}

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
		int n = people.size();
		if(n == 0)
			return people;
		sort(people.begin(),people.end(),cmp);
		vector<vector<int>> res;
        res.push_back(people[0]);
		for(int i = 1; i < n; i++)
		{
			if(people[i][1] == i)
			{
				res.push_back(people[i]);
				continue;
			}
			else
			{
				res.insert(res.begin()+people[i][1],people[i]);
			}
		}
		return res;
    }
};