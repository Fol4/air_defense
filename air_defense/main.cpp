#include <iostream>
#include "missile.h"

constexpr double t_max{ 100.0 };
constexpr double dt{ 0.1 };
constexpr double PI{ 3.14159265 };

int main()
{
	plane target{ {-100,100},
				  {1.0, 0.0} };
	missile rocket{target, 1.0, 0.5, PI/2.};

	for (double t{ 0.0 }; !rocket.is_exploded() && t < t_max; t += dt)
	{
		target.simulate(dt);
		rocket.simulate(dt);
	}
	if (rocket.is_exploded())
		std::cout << "Commander, target is doun" << std::endl;
	else
		std::cout << "Commander, we need more missile" << std::endl;
}