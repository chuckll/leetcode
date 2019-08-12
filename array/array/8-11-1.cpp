#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(vector<int> a,vector<int> b)
{
	if(a[0] != b[0])
		return a[0] < b[0];
	else
		return a[1] < b[1];
}

int main(){
    
    int n,wayT,hour,min;
    cin >> n;
	vector<vector<int>> clock;
    for(int i = 0; i < n; i++){
           int h,m;
		   vector<int> t;
		   scanf("%d %d",&h,&m);
		   t.push_back(h);
		   t.push_back(m);
		   clock.push_back(t);
    }
	sort(clock.begin(),clock.end(),cmp);
	cin >> wayT;
	cin >> hour >> min;
    int resHour,resMin;
	for(int i = 0; i < n; i++)
	{
		int h = clock[i][0], m = clock[i][1];
		if(h > hour)
			break;
		else{

			int ms = (hour - h)*60 + (min - m);
			if(ms >= wayT)
			{
				resHour = h;
				resMin = m;
			}
		}
	}
	cout << resHour << " " << resMin;
    return 0;
}