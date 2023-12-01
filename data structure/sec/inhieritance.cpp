#include<bits/stdc++.h>
#include "inhieritance.h" 
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define all(vec) vec.begin() , vec.end()
#define put(y) return void(cout << y << nl )
#define sz(r) int(r.size())
#define pi  3.14159265358979323846
#define fixed(n) fixed << setprecision(n) 


 
   
   GradedActivity :: GradedActivity()   // Default constructor
      { 
	  std::cout<<"Parent const"<<std::endl;
	  score = 0.0; 
      }

   
   GradedActivity :: GradedActivity(double s) // Constructor
      { score = s; }

   
   void GradedActivity::setScore(double s) {
    score = s; 
    }
   
   void GradedActivity:: display(){
   	std::cout<<score << endl ;
   }
   double GradedActivity:: getScore() { 
        return score;
    }
   
   
   char GradedActivity:: getLetterGrade() {
   	char letterGrade; // To hold the letter grade
   
   if (score > 89)
      letterGrade = 'A';
   else if (score > 79)
      letterGrade = 'B';
   else if (score > 69)
      letterGrade = 'C';
   else if (score > 59)
      letterGrade = 'D';
   else
      letterGrade = 'F';
   
   return letterGrade;
}
   


