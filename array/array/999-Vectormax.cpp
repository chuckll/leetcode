#include <algorithm>
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    vector<double> v;

    vector<double>::iterator biggest = max_element(v.begin(), v.end());
	cout << "Max element is " << *biggest<< " at position " << distance(v.begin(), biggest) << std::endl;

	auto smallest = min_element(v.begin(), v.end());
	cout << "min element is " << *smallest<< " at position " << distance(v.begin(), smallest) << std::endl;
}