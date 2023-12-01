#include<bits/stdc++.h>
using namespace std;

  class employee{
    private :  
        string employee_name , employee_num , hire_date ;
    public : 
        employee ()   //default constructor 
        {
          employee_name = "unknown name " ;
          employee_num = "unknown number" ; 
          hire_date = "unknown date" ;
        } 
        employee (string name , string num , string date)  //constructor
        {
          employee_name = name ; 
          employee_num = num ;
          hire_date = date ;
        } 
        void set_name(string n){
            employee_name = n ; 
        }  
        void set_num(string t){
            employee_num = t ; 
        }  
        void set_date(string d){
            hire_date = d ; 
        }
        string get_name(){
            return employee_name  ; 
        }  
        string get_num(){
            return employee_num  ; 
        }  
        string get_date(){
            return hire_date  ; 
        }
        void display (){
          cout << "employee name : " << employee_name << endl ;
          cout << "employee number : " << employee_num << endl ;
          cout << "hire date : " << hire_date << endl ;
        }
  };
  


