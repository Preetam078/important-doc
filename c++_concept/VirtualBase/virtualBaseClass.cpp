#include<iostream>
using namespace std;

class Student{ 
    protected:
    int roll_no;
    public:
    void setNumber(int a){
        roll_no = a;
    }
    void printNumber(){
        cout<<"the Roll Number is : "<<roll_no<<endl; 
    }

};

class Test : virtual public Student
{ 
    protected:
    float maths, physics;
    public:
      void setMarks(float m, float p){
           maths = m;
           physics = p;
      }
      void printMarks(){
          cout<<"your result is here: "<<endl
              <<"Maths = "<<maths<<endl
              <<"Physics = "<<physics<<endl;
      }

};

class Sport : virtual public Student{

    protected:
    float score;
    public:
    void setScore(float s){
        score = s;
    } 
     void printScore(void){
       cout<<"your Sports score is : "<<score<<endl;
     }
};

class Result : public Test , public Sport{
   
   private:
    float total;
    public:
    void display(){
          total = maths+physics+score;
          printNumber();
          printMarks();
          printScore();
          cout<<"your total score is : "<<total<<endl; 
    }

};

int main(){

    Result preetam;
    preetam.setMarks(78, 79);
    preetam.setNumber(17);
    preetam.setScore(90);
    preetam.display();
    
return 0;
}