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
    float get_gpa( float g );
    string get_level();
    void print() ;
    student add_distance( student b ) ;
    student() ;
    student( string s , float g , string l ) ;
    student operator ++ ();
    student operator ++ (int);
    student operator - (student d ) ;
    student operator + (student d ) ;
    student operator * (student d ) ;
};