
#include <iostream>
#include <cstdio>
#include <deque>
#include <stack>
using namespace std;

int main(){
   
    int n;
    cin >> n;
	deque<int> nums,nums2;
	stack<int> a,b;
	int Sa = 0, Sb = 0,Sa1 =0, Sb1 = 0;
    for(int i = 0; i < n; i++){
		int x;
        scanf("%d",&x);
		nums.push_back(x);
    }
	nums2 = nums;
	bool aTake = true;
	while(!nums.empty())
	{
		if(aTake)    //轮到a拿
		{
			if(a.size() == 0)   //第一次拿
			{
				
					a.push(nums.front());
					nums.pop_front();
				
				Sa += a.top();
			}else{
				int  temp = a.top();
				int left = nums.front();
				int right = nums.back();
				if(abs(temp - left) >= abs(temp - right))
				{
					a.push(nums.front());
					nums.pop_front();
					Sa += abs(temp - left);
				}else{
					a.push(nums.back());
					nums.pop_back();
					Sa += abs(temp - right);

				}
			}
			aTake = false;
		}else{                      // 轮到b拿

			if(b.size() == 0)   //第一次拿
			{
				if(nums.front() >= nums.back())
				{
					b.push(nums.front());
					nums.pop_front();
				}else{
					b.push(nums.back());
					nums.pop_back();
				}
				Sb += b.top();
			}else{
				int  temp = b.top();
				int left = nums.front();
				int right = nums.back();
				if(abs(temp - left) >= abs(temp - right))
				{
					b.push(nums.front());
					nums.pop_front();
					Sb += abs(temp - left);
				}else{
					b.push(nums.back());
					nums.pop_back();
					Sb += abs(temp - right);
				}
			}
			aTake = true;
		}
	}







	aTake = true;
	while(!nums.empty())
	{
		if(aTake)    //轮到a拿
		{
			if(a.size() == 0)   //第一次拿
			{
				
					a.push(nums.back());
					nums.pop_back();
				
				Sa1 += a.top();
			}else{
				int  temp = a.top();
				int left = nums.front();
				int right = nums.back();
				if(abs(temp - left) >= abs(temp - right))
				{
					a.push(nums.front());
					nums.pop_front();
					Sa1 += abs(temp - left);
				}else{
					a.push(nums.back());
					nums.pop_back();
					Sa1 += abs(temp - right);

				}
			}
			aTake = false;
		}else{                      // 轮到b拿

			if(b.size() == 0)   //第一次拿
			{
				if(nums.front() >= nums.back())
				{
					b.push(nums.front());
					nums.pop_front();
				}else{
					b.push(nums.back());
					nums.pop_back();
				}
				Sb1 += b.top();
			}else{
				int  temp = b.top();
				int left = nums.front();
				int right = nums.back();
				if(abs(temp - left) >= abs(temp - right))
				{
					b.push(nums.front());
					nums.pop_front();
					Sb1 += abs(temp - left);
				}else{
					b.push(nums.back());
					nums.pop_back();
					Sb1 += abs(temp - right);
				}
			}
			aTake = true;
		}
	}
	cout << Sa << " " << Sb << endl;
    return 0;
}