#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int n;
	vector<int> nums,res;
    cin >> n;
	int MinNumb;
    for(int i = 0; i < n; i++){
            int x; 
			scanf("%d",&x);
			if(i == 0)
				MinNumb = x;
			else
				MinNumb = min(MinNumb,x);
			nums.push_back(x);
    }
	if(n == 1)
	{
		res.push_back(nums[0]);
	}else
	{
	for(int i = 1; i <= n; i++)
	{
		if(i == 1)
			res.push_back(MinNumb);
		else{
			int left = 0,right = i-1;
			int mins;
			while(right < n)
			{
				int m;
				for(int j = left; j <= right ; j++)
				{
					if(j == left)
						m = nums[j];
					else
						m = max(nums[j],m);
				}

				if(left == 0)
					mins = m;
				else
					mins = min(mins,m);
				left++;
				right++;
			}
			res.push_back(mins);
		}
	}
	}

	for(int i = 0; i < n; i++)
	{
		cout << res[i] << " ";
	}
    return 0;
}