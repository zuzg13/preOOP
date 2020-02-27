#include <iostream>
#include <string>
#include <cmath>


using std :: string;

///This class represents vector in 2D
class Vector2D
{   
private:
    double x; /// x
    double y; /// y

public:
    ///A constructor
    Vector2D();
    ///A copying constructor
    Vector2D(const Vector2D&);
    ///A moving constrtuctor
    Vector2D(Vector2D&&);
    ///A destructor
    ~Vector2D();

    /**
     * Create Vector2D from Carthesian coordinates
     * @param _x - x coordinate
     * @param _y - y coordinate
     * @return Vector2D with _x, _y coordinates
     */
    static Vector2D fromCarthesian(double _x, double _y);
    /**
     * Create Vector2D from Polar coordinates
     * @param _r - r coordinate
     * @param _phi - phi angle coordinate
     * @return Vector2D with Polar coordinates converted to Carthesian
     */
    static Vector2D fromPolar(double _r, double _phi);
    /**
     * Sum two vectors
     * @param v2 - vector
     * @return vector that is sum of two vectors
     */
    Vector2D add(const Vector2D& v2) const;
    /**
     * Dot product of two vectors
     *
     * @param v2 - vector
     * @return dot product of two vectors
     */
    double dot(const Vector2D& v2) const ;
    /**
     * Print vector and string
     * @param str - printed string
     */
    void print(string str) const;
    /**
     * Count how many vectors are declared
     */
    static int count;
    
};


