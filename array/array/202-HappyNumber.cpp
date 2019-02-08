#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    bool isHappy(int n) {
	   vector<int> flag;
	   flag.push_back(n);
       while(n != 1){
		   int sum = 0;
		   while(n != 0)
		   {
			   int a = n % 10;
			   n = n / 10;
			   sum += a*a;
		   }
		   if(sum == 1)
			   return true;
		   else
			   n = sum;
		   for(int i = 0; i < flag.size(); i++)
		   {
			   if(flag[i] == n)
				   return false;
		   }
		   flag.push_back(n);

	   }
	   return true;
    }
};