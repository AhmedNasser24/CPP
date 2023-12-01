#include<bits/stdc++.h>
#include "employee.h"
using namespace std;

class productionworker : public employee
{
    private :
        int shift ;
        double hourly_pay_rate ;
    public :
        productionworker() : employee("unknown" , "unknown" , "unknown") 
        {
            shift  = 0  ;
            hourly_pay_rate = 0 ;
        }
        productionworker(string name , string num , string date , int shft ,double pay)
        : employee(name , num , date)
        {
            shift = shft ;
            hourly_pay_rate = pay ;
        }
        void set_shift(int sh){
            shift = sh ;
        }
        void set_hourly_pay_rate(double pay){
            hourly_pay_rate = pay ;
        }
        int get_shift(){
            return shift ;
        }
        double get_hourly_pay_rate(){
            return hourly_pay_rate ;
        }
        void display(){
            employee :: display() ;
            cout << "shift : " << shift << endl ;
            cout << "hourly_pay_rate : " << hourly_pay_rate << endl ;
        }
};