#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
	bool search(vector<vector<int>> array,int x,int y,vector<vector<bool>>& isVisited,int target)
	{
		int m = array.size(), n = array[0].size();
		if(x < 0 || y < 0 || x >= m || y >= n)
			return false;
		if(array[x][y] > target)
			return false;
		if(isVisited[x][y] == true)
			return false;
		if(array[x][y] == target)
			return true;
		isVisited[x][y] = true;
		return search(array,x+1,y,isVisited,target)||search(array,x,y+1,isVisited,target);
		

	}


    bool Find(int target, vector<vector<int> > array) {
		int m = array.size(), n = array[0].size();
		if(m == 0 && n == 0)
			return false;
		vector<bool> temp(n,false);
		vector<vector<bool>> isVisited(m,temp);
		return search(array,0,0,isVisited,target);
    }
};