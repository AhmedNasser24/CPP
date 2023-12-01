#include "shape.cpp"  // take care , this is   .cpp    not   .h 
class rectangle : public shape 
{
    private : 
    int width ;
    public:
    int area ();
    void draw();
    rectangle ();
    rectangle(int l , int w , int h) ;
        
    
};