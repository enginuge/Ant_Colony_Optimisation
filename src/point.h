#ifndef POINT_H
#define POINT_H

double absValue(double);

double sq_rt(double);

class Point {
private:
    double x;
    double y;

public:
    // Constructor
    Point(double x_coord, double y_coord);

    // Set x-coordinate
    void setX(double x_coord);

    // Set y-coordinate
    void setY(double y_coord);

    // Get x-coordinate
    double getX();

    // Get y-coordinate
    double getY();

    // Calculate distance to another point
    double distanceTo(Point other);
};

#endif

