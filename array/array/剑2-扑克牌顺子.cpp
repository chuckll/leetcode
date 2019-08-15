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
		int now = -1,count = 0;
		for(int i = 0; i < numbers.size(); i++)
		{
			if(numbers[i] == 0)
				zeros++;
			else{

				if(now == -1)
					now = numbers[i];
				else{
					if(numbers[i] == now)
						return false;
					count += numbers[i] - now -1;
					now = numbers[i];
				}
			}
		}

		if(count <= zeros)
			return true;
		return false;


    }
};