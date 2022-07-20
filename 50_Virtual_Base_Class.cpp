#include<iostream>
using namespace std;

/*
student---> Test
student---> Sports
Test---> Result
Sports---> Result
*/

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void get_number(void){
            cout<<"Your Roll no. is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
    float maths,physics;
    public:
        void set_marks(float m1,float m2){
            maths= m1;
            physics= m2;
        }

        void get_marks(void){
            cout<<"Your marks in Maths are "<<maths<<endl;
            cout<<"Your marks in physics are "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void get_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths+physics+score;
            get_number();
            get_marks();
            get_score();
            cout<<"Your Total score is "<<total<<endl;
        }
};

int main(){
    Result Priyanshu; 
    Priyanshu.set_number(1049);
    Priyanshu.set_marks(57.0,82.0);
    Priyanshu.set_score(10);
    Priyanshu.display();

   return 0;

} 