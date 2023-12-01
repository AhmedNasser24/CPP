#include<bits/stdc++.h>
#include "inhiretance.h"
//#include "class1.h"
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define all(vec) vec.begin() , vec.end()
#define put(y) return void(cout << y << nl )
#define sz(r) int(r.size())
#define fixed(n) fixed << setprecision(n) 


inh :: inh (){
    cout << "hello\n" ;
}
inh :: inh (float g , int ag ) :  student(g) , age(ag) 
{
    cout << "hello\n" ;
} 
void inh :: display(){
    cout << "ahmed nasser ibrahim elsaman" << nl ;
}
void inh :: print(){
    //student :: print() ;
    cout << "yes" << nl ;
}
float inh :: get_gpa( float g){
    //student :: get_gpa(g) ;
    return g + 100 ;
}
