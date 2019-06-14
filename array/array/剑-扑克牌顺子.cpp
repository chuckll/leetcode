#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;




class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
		if(numbers.size() == 0)
			return false;
		sort(numbers.begin(),numbers.end());
		int zeros = 0;
		int pre = -1;
		for(int i = 0; i < numbers.size(); )
		{
			if(numbers[i] == 0)
			{
				zeros++;
				i++;
				continue;
			}else{
				if(pre == -1)
				{
					pre = numbers[i];
					i++;
					continue;
				}
				if(numbers[i] == pre+1)
				{
					pre++;
					i++;
					continue;
				}else{
					if(zeros > 0)
					{
						zeros--;
						pre++;
						continue;
					}else{
						return false;
					}
				}
			}
		}
		return true;
    }
};