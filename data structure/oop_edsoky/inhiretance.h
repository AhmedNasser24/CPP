#include<bits/stdc++.h>
#include "class1.cpp" 
using namespace std;

class inh : public student 
{
    private :
        int age ;
    public :
     inh () ;
    inh (float g , int a) ;
    void display();
    float get_gpa( float g );
    void print() ;
};