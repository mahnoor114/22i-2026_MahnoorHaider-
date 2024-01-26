#include <iostream>
using namespace std;

class point 
{
private:
    float  x, y;
public:
    
    point(double x1, double y1)
    {
        x = x1;
        y = y1;

    }

    
    double getx() const 
    {
        return x;
    }

    double gety() const 
    {
        return y;
    }

    // Setter methods
    void setx(float a)
    {
        x = a;
    }

    void sety(double b) 
    {
        y = b;
    }

    // Method to calculate distance to another point
    double distance(const point& other) const
    {
        float X = x - other.getx();
        float Y = y - other.gety();
        return X * X + Y * Y;  
    }
};

int main() 
{
    // Example usage of the Point class
    float  x1, x2, y1, y2;


    // Get coordinates for point 1
    cout << "\n enter the first coordinate of x: ";
    cin >> x1;
 
    cout << "\n enter the second coordinate of x: ";
    cin >> x2;
   

    cout << "\n enter the first coordinate of y: ";
    cin >> y1;
    cout << "\n enter the second coordinate of y: ";
    cin >> y2;

    // Create points
    point p1(x1, y1);
    point p2(x2, y2);

    // Display initial coordinates
    cout << "Point 1: " << p1.getx() << ", " << p1.gety() << endl;
    cout << "Point 2: " << p2.getx() << ", " << p2.gety() <<  endl;

    // Calculate and display distance between points
    double difference = p1.distance(p2);
    cout << "the square of distance is: " << difference  << endl;

    return 0;
}
