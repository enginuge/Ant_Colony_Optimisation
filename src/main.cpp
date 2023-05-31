#include <iostream>

#include "point.h"
#include "city.h"
#include "ant.h"
#include "city_maker.h"

#define MAX_ANTS 100
#define MAX_CITIES 10

int main (int argc, char *argv[]) {
	int num_cities = 0;

	generate_coordinates();

	read_coordinates("coordinates.txt");

	std::vector<City> cities;

	cities = return_cities("coordinates.txt");

	City city_one = cities.at(1);

	for (City current_city : cities) {
		std::cout << "City_one ID: " << current_city.getID() << std::endl;

		std::cout << "City_one x and y: " << current_city.getX()  << ", " << current_city.getY() << std::endl;
	}
	return 0;
}
