#include "city_maker.h"

int generate_coordinates()
{
    int num_points;
    int seed = 0;
    std::cout << "Enter the number of points to generate: ";
    std::cin >> num_points;

    std::cout << "Enter the seed: ";
    std::cin >> seed;

    srand(seed); // Seed the random number generator with the current time

    std::ofstream output_file("coordinates.txt");

    if (!output_file) {
	std::cerr << "Failed to open the output file." << std::endl;
        return 1;
    }

    output_file << num_points << std::endl;

    for (int i = 0; i < num_points; i++) {
        // Generate random x and y coordinates between -100 and 100
        int x = rand() % 201 - 100; // rand() % n generates a random number between 0 and n-1
        int y = rand() % 201 - 100;
        output_file << x << " " << y << std::endl;
    }

    output_file.close();

    std::cout << "Generated " << num_points << " random coordinates and wrote them to coordinates.txt." << std::endl;

    return 0;
}

void read_coordinates(const char* filename)
{
	std::ifstream input_file(filename);

    	if (!input_file) 
	{
	    	std::cerr << "Failed to open the input file." << std::endl;
        	exit(1);
    	}

	int num_points = 1;

    input_file >> num_points;

    std::cout << "Number of Points: " << num_points << std::endl;

    int x, y;
    for (int i = 0; i < num_points; i++) 
    {
	//input_file >> points[i].x >> points[i].y;
	input_file >> x >> y;

	std::cout << x << ", " << y << std::endl;
    }

    input_file.close();
}

std::vector<City> return_cities(const char* filename)
{
	int point_count = 0;

	std::ifstream input_file(filename);

    	if (!input_file) 
	{
	    	std::cerr << "Failed to open the input file." << std::endl;
        	exit(1);
    	}

    	input_file >> point_count;

	std::vector<City> cities;

	int x=0, y=0;

	for(int i = 0; i < point_count; i++)
	{
		input_file >> x >> y;
		City new_city(i, x, y);
		cities.push_back(new_city);
	}

	return cities;
}
