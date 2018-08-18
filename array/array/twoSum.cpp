#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		int another;
		vector<int> result;
        for(int i=0; i < nums.size() ; i++)
        {
			another = target - nums[i];
			for(int j=0; j < nums.size(); j++)
			{
				if((j != i) &&   nums[j] == another)
				{
					result.push_back(i);
					result.push_back(j);
					return result;
				}
			}
        }

    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        vector<int> res;
        map<int ,int> subMap;
        for(int i = 0;i<N;i++)
        {
            int temp = target -nums[i];
            auto it = subMap.find(temp);
            if(it != subMap.end())
            {
                res.push_back(it->second);
                 res.push_back(i);
            }
            subMap[nums[i]] = i;
        }
        
        return res;
       
    }
};

