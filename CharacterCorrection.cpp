/*
Program Name: character Correction Method
Author: B. Bayless
Last Updated: July 1, 2019
Purpose: Code wars Submission - Correct the mistakes of the character recognition software
Link: https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/cpp
*/

#include <string>
#include <algorithm>

using namespace std;

std::string correct(std::string str) {
	string toFix = str;
	replace(toFix.begin(), toFix.end(), '1', 'I');
	replace(toFix.begin(), toFix.end(), '0', 'O');
	replace(toFix.begin(), toFix.end(), '5', 'S');
	return toFix;
}