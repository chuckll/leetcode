#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <unordered_set>
using namespace std;

int main(){
   
    int n,ans = 0;
	unordered_set<int> nums;
    cin >> n;
    for(int i = 0; i < n; i++){
            int x,y; 
			scanf("%d %d",&x,&y);
			if(x == 1)
			{
				nums.insert(y);
			}else{
				if(!nums.count(y))
				{
					cout << "NO" << endl;
				}else{
					cout << "YES" << endl;
				}
			} 
    }
    return 0;
}