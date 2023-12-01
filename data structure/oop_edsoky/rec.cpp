#include<bits/stdc++.h>
#include "rec.h"
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define all(vec) vec.begin() , vec.end()
#define put(y) return void(cout << y << nl )
#define sz(r) int(r.size())
#define fixed(n) fixed << setprecision(n) ;


rectangle :: rectangle(): width(6){

}  
rectangle :: rectangle(int l , int h , int w ) : shape(l,h) , width(w)
{

}
int rectangle :: area(){
    
    return  shape :: area() * width ;
}
void rectangle :: draw(){
    // shape :: draw() ;
    cout << "this is rectangle of area : " << nl ;
    cout << rectangle :: area() << nl ;
    cout << length ; 
}
 