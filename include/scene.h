#ifndef SCENE
#define SCENE

#ifndef PRIMITIVE
    #include "primitive.h"
#endif //PRIMITIVE

#ifndef LIGHT
    #include "light.h"
#endif //LIGHT

#include <vector>

class Scene {
    public:
        Primitive *aggregate;
        vector<Light *> lights;
        
        bool Intersect(const Ray &ray, Intersection *itsc);
        bool IntersectP(const Ray &ray);
        
        // ADD: Bounding box, is it really required? (p. 24)
};


#endif //SCENE