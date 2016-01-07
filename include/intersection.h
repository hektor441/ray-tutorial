#ifndef ITSC
#define ITSC

#ifndef VECTOR3
    #include "vector3.h"
#endif // VECTOR3

class Material;

class Intersection {
    public:
        float tmin;
        Vector3 point;
        Vector3 normal;
        Material *material;
        
        // constructor
        Intersection();
};

#endif //ITSC
