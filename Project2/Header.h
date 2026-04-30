#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void InputVector(vector<int>& vec)
{
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	if (n > 0)
	{
		vec.resize(n);
		for (int i = 0; i < n; ++i)
		{
			cout << "Enter element " << i + 1 << ": ";
			cin >> vec[i];
		}
	}
	else {
		cout << "Number of elements must be greater than 0." << endl;
	}
	
}

int findMinElement(const vector<int>& vec)
{
	if (vec.empty())
	{
		throw runtime_error("Vector is empty");
	}
	return *min_element(vec.begin(), vec.end());
}

int findMaxElement(const vector<int>& vec)
{
	if (vec.empty())
	{
		throw runtime_error("Vector is empty");
	}
	return *max_element(vec.begin(), vec.end());
}