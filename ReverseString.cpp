/*
Program Name: Odd Below N
Author: B. Bayless
Last Updated:6/26/19
Purpose: Code wars Submission - Reverse Strings
Link:
*/

#include <string>
#include <algorithm>
using namespace std;

string reverseString(string str)
{
	string s = str;
	reverse(s.begin(), s.end());

	return s;
}