#include <iostream>
#include <vector>
using namespace std;

//struct TreeNode{
//	int p;
//	int q;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int a,int b){
//		p = a;
//		q = b;
//		left = NULL;
//		right = NULL;
//	}
//};


int main() {
    int P,Q;
    cin >> P >> Q;
	vector<int> first;
	first.push_back(1);
	vector<vector<int>> all;
	all.push_back(first);
	for(int i = 1; i < 12; i++)
	{
		vector<int> temp = all[i-1];
		vector<int> add = temp;
		for(int j = 0; j < temp.size(); j++)
		{
			add.push_back(temp[j]+temp[temp.size()-1-j]);
		}
		all.push_back(add);
	}

	for(int i = 0; i < 12; i++)
	{
		vector<int> temp = all[i];
		bool find = false;
		for(int j = 0; j < temp.size(); j++)
		{
			if(temp[j] == P && temp[temp.size()-1-j] == Q)
			{
				cout << i+1 << " " << j+1 << endl;
				find = true;
				break;
			}
		}
		if(find)
			break;
	}
	return 0;

}









#include <iostream>
#include <cstdio>
#include <deque>
#include <stack>
using namespace std;

int main(){
   
    int n;
    cin >> n;
	deque<int> nums;
	stack<int> a,b;
	int Sa = 0, Sb = 0;
    for(int i = 0; i < n; i++){
		int x;
        scanf("%d",&x);
		nums.push_back(x);
    }
	bool aTake = true;
	while(!nums.empty())
	{
		if(aTake)    //轮到a拿
		{
			if(a.size() == 0)   //第一次拿
			{
				if(nums.front() >= nums.back())
				{
					a.push(nums.front());
					nums.pop_front();
				}else{
					a.push(nums.back());
					nums.pop_back();
				}
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
	cout << Sa << " " << Sb << endl;
    return 0;
}