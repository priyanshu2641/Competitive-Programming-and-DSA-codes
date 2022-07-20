#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(){
    cout<<"The roll no. of the students is "<<roll_number<<endl;
}

class Examination : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Examination :: set_marks(float m1,float p1){
    maths= m1;
    physics= p1;
}
void Examination :: get_marks(){
    cout<<"Marks scored in Maths are "<<maths<<endl;
    cout<<"Marks scored in physics are "<<physics<<endl;
}
 
class Result : public Examination{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"Your Percentage is "<<(maths + physics)/2<<" %."<<endl;
        }
};

int main(){
   Result Priyanshu;
   Priyanshu.set_roll_number(28);
   Priyanshu.set_marks(57.0,82.0);
   Priyanshu.display_result();

   return 0;

}