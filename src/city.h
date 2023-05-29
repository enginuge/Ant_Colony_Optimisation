#ifndef CITY_H
#define CITY_H

class City {
private:
    int id;
    Point location;

public:
    // Constructor
    City(int city_id, double x_coord, double y_coord);

    // Set ID
    void setID(int city_id);

    // Get ID
    int getID();

    // Set x-coordinate
    void setX(double x_coord);

    // Set y-coordinate
    void setY(double y_coord);

    // Get x-coordinate
    double getX();

    // Get y-coordinate
    double getY();

    Point getPoint();

    double distanceToPoint(Point other);

    // Calculate distance to another city
    double distanceToCity(City other);
};
#endif
