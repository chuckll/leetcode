#include<stdio.h>

using namespace std;




class Solution {
public:
    int jumpFloorII(int number) {
		if(number == 1 || number == 0)
			return 1;
		return 2*jumpFloorII(number-1);
    }
};