#include<bits/stdc++.h>
#include "inhieritance.cpp"
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define all(vec) vec.begin() , vec.end()
#define put(y) return void(cout << y << nl )
#define sz(r) int(r.size())
#define pi  3.14159265358979323846
#define fixed(n) fixed << setprecision(n) 
class final_exam : public GradedActivity
{
    public : 
    final_exam(){

    }
    final_exam(double s) : GradedActivity(s){
        cout << "result : " << s << nl ;
    }
};

