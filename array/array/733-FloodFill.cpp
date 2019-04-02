#include<stdio.h>
#include<vector>
using namespace std;





class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
		int r = image.size(), c = image[0].size();
		vector<vector<bool>> isVisited(r,vector<bool>(c,false));
		floodFill2(image,sr,sc,newColor,isVisited);
		return image;
    }

	void floodFill2(vector<vector<int>>& image, int sr, int sc, int newColor,vector<vector<bool>>& isVisited) {

		int oldColor = image[sr][sc];

		image[sr][sc] = newColor;
		isVisited[sr][sc] = true;
		
		if( sr-1 >= 0 && image[sr-1][sc] == oldColor && isVisited[sr-1][sc] == false)
		{
			floodFill2(image,sr-1,sc,newColor,isVisited);
		}
		if( sr+1 < image.size() && image[sr+1][sc] == oldColor && isVisited[sr+1][sc] == false)
		{
			floodFill2(image,sr+1,sc,newColor,isVisited);
		}
		if( sc-1 >= 0 && image[sr][sc-1] == oldColor && isVisited[sr][sc-1] == false)
		{
			floodFill2(image,sr,sc-1,newColor,isVisited);
		}
		if( sc+1 < image[0].size() && image[sr][sc+1] == oldColor && isVisited[sr][sc+1] == false)
		{
			floodFill2(image,sr,sc+1,newColor,isVisited);
		}
	}
};