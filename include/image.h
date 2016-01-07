#ifndef IMAGE
#define IMAGE

#ifndef VECTOR3
    #define VECTOR3
#endif //VECTOR3

class Image {
        int width, height;
        vector<unsigned char> buffer;
    public:
        Image(int width, int height);
        
        int getWidth()  const { return width;  }
        int getHeight() const { return height; }
      
        void clear();
        void add(int x, int y, Vector3 color);
        void encodePNG(char *filename[]);  
};

#endif //IMAGE