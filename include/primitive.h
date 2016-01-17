#ifndef PRIMITIVE
#define PRIMITIVE

#ifndef SHAPE
    #include "shape.h"
#endif //SHAPE

#ifndef MATERIAL
    #include "material.h"
#endif //MATERIAL



class Primitive {
    Shape shape;
    Material material;
    /////// TODO: p 185
    public:
        // Constructor
        Primitive(Shape, Material);
        
        virtual Intersect(const Ray &ray, Intersection *itsc) const = 0;
        virtual IntersectP(const Ray &ray) const = 0;
};


#endif //PRIMITIVE