#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int kind = 1;
		sort(candies.begin(),candies.end());
		for(int i = 1; i < candies.size(); i++)
		{
			if(candies[i] != candies[i-1])
				kind++;
		}
		if(kind < candies.size()/2)
			return kind;
		else
			return candies.size()/2;
    }
};