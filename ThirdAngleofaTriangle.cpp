/*
Program Name:Third Angel of a Triangle
Author:Brice Bayless
Last Updated: June 27, 2019
Purpose: Code wars Submission - Third Angle of a Triangle
Link:
*/
class Triangle {
public:
	static int otherAngle(int a, int b)
	{
		return 180 - (a + b);
	}
};