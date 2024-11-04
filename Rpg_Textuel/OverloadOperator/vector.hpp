#include <iostream>

class Vector
{
public: 
    float x, y;
    Vector(float x = 0, float y = 0) : x(x), y(y) {}
    // Surcharge de l'opérateur <<
    friend std::ostream& operator<<(std::ostream& os, const Vector& v) {
        os << "Vector(" << v.x << ", " << v.y << ")";
        return os;
    }
};