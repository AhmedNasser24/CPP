#include<bits/stdc++.h>
using namespace std;
class shape {
    protected :
    int length , height ;
    public :
    virtual void draw() ;
    virtual int area() ;
    shape () ;
    shape (int l , int h) ;
    friend void print(shape p) ; 
};
