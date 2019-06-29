/*
Program Name:Sum of Positive
Author:Brice Bayless
Last Updated: June 27, 2019
Purpose: Code wars Submission - Sum of Positive
Link:
*/

#include <vector>

int positive_sum(const std::vector<int> arr) {
	int arr_sum = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] < 0)
			continue;

		else
			arr_sum += arr[i];
	}
	return arr_sum;
}