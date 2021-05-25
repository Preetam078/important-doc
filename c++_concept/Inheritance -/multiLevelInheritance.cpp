#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void setRollno(int);
    void getRollno(void);
};

void Student :: setRollno(int r){
    roll_no = r;
}
void Student :: getRollno(){
    cout<<"the Rollno is : "<<roll_no<<endl;
}

class Exam : public Student{
    protected: 
    float maths, physics;
    public:
    void setMarks(float,float);
    void getMarks(void);
};

void Exam :: setMarks(float m, float p){
    maths = m;
    physics = p;
}
void Exam :: getMarks(){
    cout<<"The marks obtained is : "<<maths<<" "<<physics<<endl;
}

class Result : public Exam{
  float percentage;
  public: 
  void display(){
      getRollno();
      getMarks();
      cout<<" your percentage is : "<<(maths+physics)/2<<endl;
  }

};
int main(){

    Result preetam;
    preetam.setRollno(20);
    preetam.setMarks(78,89);
    preetam.display();

return 0;
}