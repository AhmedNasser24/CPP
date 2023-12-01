#include<bits/stdc++.h>
#include "shape.h" 
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define all(vec) vec.begin() , vec.end()
#define put(y) return void(cout << y << nl )
#define sz(r) int(r.size())
#define fixed(n) fixed << setprecision(n) ;


void shape :: draw()   {
    cout << "draw your shape : "<< nl ;
}
int shape :: area(){
return length * height ;
}
shape :: shape () : length(5) , height(4)
{

}
shape :: shape (int l , int h) : length(l) , height(h)
{

}

