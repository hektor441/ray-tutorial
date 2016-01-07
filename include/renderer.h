#ifndef RENDERER
#define RENDERER

class Renderer {
    public:
        // interface
        virtual void Render(const Scene *scene) = 0;
  
};

#endif //RENDERER