#include<stdio.h>
#include<vector>
using namespace std;


class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};

class Solution {
public:
	Node* construct(vector<vector<int>>& grid) {
		return quard(0,0,grid.size(),grid);
	}


	Node* quard(int x,int y, int offset,vector<vector<int>>& grid){
		if(offset <= 0)
		{
			return NULL;
		}
		int flag = grid[x][y];
		for(int i = x; i < x+offset; i++)
		{
			for(int j = y; j < y+offset; j++)
			{
				if(grid[i][j] != flag)
				{
					return new Node(false,false,
						quard(x,y,offset/2,grid),
						quard(x,y+offset/2,offset/2,grid),
						quard(x+offset/2,y,offset/2,grid),
						quard(x+offset/2,y+offset/2,offset/2,grid));
				}
			}
		}
		return new Node(flag,true,NULL,NULL,NULL,NULL);
	}
};