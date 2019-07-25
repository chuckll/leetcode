#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		int n2 = flowerbed.size();
		for(int i = 0; i < n2; i++)
		{
			if(flowerbed[i] == 1)
				continue;
			else{
				if(i-1 >= 0 && flowerbed[i-1] == 1)
					continue;
				if(i+1 < n2 && flowerbed[i+1] == 1)
					continue;
			    n--;
				flowerbed[i] = 1;
			}
		}
		if(n <= 0)
			return true;
		else
			return false;
    }
};