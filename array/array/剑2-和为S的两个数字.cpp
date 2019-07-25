#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        
		vector<int> res;
		int first = 0, last = array.size()-1;
		while(first < last)
		{
			int s = array[first] + array[last];
			if(s == sum)
			{
				res.push_back(array[first]);
				res.push_back(array[last]);
				break;
			}else if(s > sum){
				last--;
			}else{
				first++;
			}
		}
		return res;
    }
};