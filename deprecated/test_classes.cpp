#include <iostream>
#include <vector>
#include "point.h"
#include "city.h"
#include "ant.h"

int main()
{
	Point p1(5.0, 10.0);
	Point p2(7, 12);

	std::cout << "Point 1 x and y: " << p1.getX() << ", " << p1.getY() << std::endl;
	std::cout << "Point 2 x and y: " << p2.getX() << ", " << p2.getY() << std::endl;


	std::cout << "Distance between points" << p1.distanceTo(p2) << std::endl;

	City c1(1, 2, 3);

	std::cout << "City 1 x and y: " << c1.getX() << ", " << c1.getY() << std::endl;

	std::cout << "Distance between p1 and c1: " << p1.distanceTo(c1.getPoint()) << std::endl;
	std::cout << "Distance between c1 and p1: " << c1.distanceToPoint(p1) << std::endl;

	City c2(2, 30, 30);

	std::cout << "City 2 x and y: " << c2.getX() << ", " << c2.getY() << std::endl;

	std::cout << "Distance between c1 and p2: " << c1.distanceToCity(c2) << std::endl;

	Ant a1(0, 0,0);

	// Move to city 2.
	a1.MoveToCity(c2);

	std::cout << "Ant Zero x and y: " << a1.getX() << ", " << a1.getY() << std::endl;

	std::cout << "Ant Zero distance travelled: " << a1.GetDistanceTravelled() << std::endl;

	std::cout << "Ant Zero places visited: " << a1.GetPath().size() << std::endl;
	
	std::cout << "Ant Zero x and y: " << a1.getX() << ", " << a1.getY() << std::endl;

	std::cout << "Move Ant Zero to c1: " << std::endl;

	// Move to city 1.
	a1.MoveToCity(c1);

	std::cout << "Ant Zero x and y: " << a1.getX() << ", " << a1.getY() << std::endl;

	std::cout << "Ant Zero distance travelled: " << a1.GetDistanceTravelled() << std::endl;

	std::cout << "Ant Zero places visited: " << a1.GetPath().size() << std::endl;
  
	// Print path of ant 1.
	for(City n : a1.GetPath())
		std::cout << n.getID() << " ";

	std::cout << std::endl;

	return 0;
}
