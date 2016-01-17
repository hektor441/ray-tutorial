#ifndef RENDERER
#define RENDERER

#ifndef SCENE
    #include "scene.h"
#endif //SCENE

class Renderer {
    public:
        virtual void Render(const Scene *scene) = 0;
        // ADD: Spectrum (p. 25)
        
        
};


#endif //RENDERER