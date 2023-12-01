#include<bits/stdc++.h>
using namespace std;

class student{
    private :
         float gpa ;
         string name , level ;

    public:
    void set_name(string n) ;
    void set_gpa(float g) ;
    void set_level(string l) ;
    string get_name() ;     
    float get_gpa();
    string get_level();
    
    student() ;
    ~student() ;
};