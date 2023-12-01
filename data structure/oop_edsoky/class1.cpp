#include <bits/stdc++.h>
#include "class1.h"
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
void student::set_name(string s) {
    name = s ;
}
string student:: get_name(){
    return name ;
}
void student :: set_gpa(float g){
    gpa = g ;
}
float student :: get_gpa( float g){
    return g ;
}
void student :: set_level(string l){
    level = l ;
}
void student :: print(){
    cout << name << " " ;
  cout << gpa << " " ;
  cout << level << nl;
}
student student :: add_distance( student d){
    student res ;
    res.level = level + d.level ;
    res.gpa = gpa + d.gpa ;
    res.name = name + d.name ;
    return res ;
 }

string student :: get_level(){
    return level ;
}
student :: student(): gpa(4) , name("ah") , level("one")
{
    cout << "hi\n" ;
}
student :: student( string s , float g , string l = "one") : gpa(g) , name(s) , level(l)
{
    
}
student student :: operator ++ (){
    ++gpa ;
    return student( name ,  gpa  , level) ;
}
student student :: operator ++ (int){
    gpa++ ;
    return student( name , gpa , level) ;
}

student student :: operator* (student g2 ){
    float g = gpa * g2.gpa ;
    return student( name , g , level) ;
}
student student :: operator - (student g2 ){
    float g = gpa - g2.gpa ;
    return student( name , g , level) ;
}
student student :: operator + (student g2 ){
    float g = gpa + g2.gpa ;
    return student( name , g , level) ;
}
