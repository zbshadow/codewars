/*
Program Name:Remove First and Last
Author:Brice Bayless
Last Updated: June 27, 2019
Purpose: Code wars Submission - Remove First and Last Character
Link:
*/

#include <string>

using namespace std;

string sliceString(string str)
{
	str = str.erase(0,1);
	str = str.erase(str.size() -1 );
	return str;
}

/*
Best Practice

#include <string>
using namespace std;

string sliceString (string str ){
return str.substr(1, str.size() - 2);
}
*/