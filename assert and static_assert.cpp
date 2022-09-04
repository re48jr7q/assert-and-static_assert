#include <iostream>
#include <cassert>	//std::assert
#include <cmath>	//std::sqrt

double calculateTimeBeforeHitTheGround(double initialHeight, double gravity)
{
	assert(gravity > 0.0);
		if (initialHeight <= 0.0)
		{
			return 0.0;
		}
		return std::sqrt((2.0 * initialHeight) / gravity);
}
int main()
{
	std::cout << "Took" << calculateTimeBeforeHitTheGround(100.0, -9.8) << " second(s).\n";
}
