#include<stdio.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int first = 0, last = numbers.size()-1;
		vector<int> res;
		while(first < last)
		{
			int sum = numbers[first] + numbers[last];
			if(sum == target)
			{
				res.push_back(first+1);
				res.push_back(last+1);
				break;
			}else if(sum > target)
			{
				last--;
			}else{
				first++;
			}
		}
		return res;
    }
};