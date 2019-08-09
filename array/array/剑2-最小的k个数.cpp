#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;


class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
		priority_queue<int> q;
		if(input.size() < k || k <= 0)
			return res;
		for(int i = 0; i < input.size(); i++)
		{
			if(i < k)
			{
				q.push(input[i]);
			}else{
				if(input[i] < q.top())
				{
					q.pop();
					q.push(input[i]);
				}
			}
		}


		for(int i = 0; i < k ;i++)
		{
			res.push_back(q.top());
			q.pop();
		}

		return res;



    }
};