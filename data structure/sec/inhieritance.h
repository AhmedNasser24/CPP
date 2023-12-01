
class GradedActivity
{

public:
GradedActivity();
GradedActivity(double s);
void setScore(double s);
void display() ;
double getScore();
char getLetterGrade();
private:
double score;   // To hold the numeric score
};