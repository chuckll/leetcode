#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double smax = 0;
		int sum = points.size();
		for(int i = 0; i < sum; i++)
		{
			for(int j = i+1; j < sum; j++)
			{
				for(int k = j+1; k < sum; k++)
				{

					vector<int> p1 = points[i];
					vector<int> p2 = points[j];
					vector<int> p3 = points[k];
					double a = sqrt(pow(p1[0]-p2[0],2) + pow(p1[1]-p2[1],2));
					double b = sqrt(pow(p1[0]-p3[0],2) + pow(p1[1]-p3[1],2));
					double c = sqrt(pow(p3[0]-p2[0],2) + pow(p3[1]-p2[1],2));
					if(a+b > c)
					{

						double p = (a+b+c)/2;
						double s = sqrt(p*(p-a)*(p-b)*(p-c));
						if(s > smax)
							smax = s;
					}
				}
			}
		}
		return smax;
    }
};