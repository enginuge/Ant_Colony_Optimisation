#include<vector>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "point.h"
#include "city.h"

int generate_coordinates();

void read_coordinates(const char* filename);

std::vector<City> return_cities(const char* filename);
