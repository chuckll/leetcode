#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;



bool cmp(vector<int> a,vector<int> b)
{
	return a[0] < b[0];
}

int main(){
   
    int n;
    cin >> n;
	vector<int> year;
	vector<vector<int>> paixu;
	
    for(int i = 0; i < n; i++){
        int x;
		vector<int> temp;
		scanf("%d",&x);
		year.push_back(100);
		temp.push_back(x);
		temp.push_back(i);
		paixu.push_back(temp);
		
    }
	int res = n*100;
	sort(paixu.begin(),paixu.end(),cmp);
	vector<bool> isVisted(n,false);
	for(int i = 0 ;  i < paixu.size(); i++)
	{
		int index = paixu[i][1];
		bool f = false;
		if((index-1>=0 && isVisted[index-1] == true) )
		{
			year[index] = year[index-1]+100;
			res += 100;
			f = true;
		}
		if(f == false && (index+1<n && isVisted[index+1] == true))
		{
			year[index] = year[index+1]+100;
			f = true;
			res += 100;
		}
	}

	cout << res; 
  





    return 0;
}