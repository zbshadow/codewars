/*
Program Name:Bool to String
Author: Brice Bayless
Last Updated: 6/26/19
Purpose: Code wars Submission - Convert a Boolean to a String
Link:
*/

#include <string>

using namespace std;

string boolean_to_string(bool b) {

	string str;
	
	if (b) 
	{
		str = "true";
	}
	else
	{
		str = "false";
	}

	return str;
}