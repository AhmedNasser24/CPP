#include <bits/stdc++.h>
#include "class.h"
using namespace std;

void student::set_name(string s) {
    name = s ;
}
string student:: get_name(){
    return name ;
}
void student :: set_gpa(float g){
    gpa = g ;
}
float student :: get_gpa(){
    return gpa ;
}
void student :: set_level(string l){
    level = l ;
}
string student :: get_level(){
    return level ;
}
student :: student(){

}
student :: ~student(){

}
