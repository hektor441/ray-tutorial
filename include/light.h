#ifndef LIGHT
#define LIGHT

#ifndef VECTOR3
    #include "vector3.h"
#endif //VECTOR3


class Light {
    public:
        Light(Vector3 pos, float intensity, Vector3 color);
        Light(Vector3 pos, float intensity);
        Vector3 pos;
        float intensity;
        Vector3 color;
};

#endif //LIGHT