#include "../include/image.h"
#include "../include/lodepng.h"


Image::Image(int w, int h) {
    width = w;
    height = h;
    buffer.resize(w*h*4);
    clear();
}

void Image::clear()
{   // Set all the entries in the buffer to default
    int n = width*height*4;
    // rgb values set to 0
    for(int i=0;i<n;i++)
        buffer[i] = 0;
    // alpha values set to 255
    for(int i=3;i<n;i+=4)
        buffer[i] = 255;    
} 
  
void Image::add(int x, int y, Vector3 color)
{   // color the pixel at x, y
    int k = (y*width + x);
    
    buffer[k++]+= color.x;
    buffer[k++]+= color.y;
    buffer[k++]+= color.z;
}

void encodePNG(const char* filename)
{   // Generate the PNG file from the buffer 
    vector<unsigned char> png;
    unsigned error = lodepng::encode(png, buffer, width, height);    
    if(error)
        cout << "encoder error " << error << ": "<< lodepng_error_text(error) << endl;
    else
        lodepng::save_file(png, filename);    
}
