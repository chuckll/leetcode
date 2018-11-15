//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//
//class Solution {
//public:
//    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
//		vector<int> max_row;
//		for(int i = 0; i < grid.size(); i++)
//		{
//			vector<int> row;
//			for(int j = 0; j < grid[i].size(); j++)
//			{
//				row.push_back(grid[i][j]);
//			}
//			int max = *max_element(row.begin(),row.end());
//			max_row.push_back(max);
//		}
//
//		vector<int> max_line;
//		for(int i = 0; i < grid[0].size(); i++)
//		{
//			vector<int> line;
//			for(int j = 0; j < grid.size(); j++)
//			{
//				line.push_back(grid[j][i]);
//			}
//			int max = *max_element(line.begin(),line.end());
//			max_line.push_back(max);
//		}
//
//		int count = 0;
//		for(int i = 0 ; i < grid.size(); i++)
//		{
//			for(int j = 0; j < grid[i].size(); j++)
//			{
//				int thre = min(max_row[j],max_line[i]);
//				count += thre - grid[i][j];
//			}
//		}
//
//		return count;
//    }
//};