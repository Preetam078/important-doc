#include<iostream>
#include<cstring>
using namespace std;

class Preetam{
   protected:
   string title;
   float rating;
   public:
   Preetam(string s,float r){
       title= s;
       rating = r;
   }
   virtual void display()=0;//do nothing function OR pure virtual function
};

class PreetamVideo : public Preetam{
    int videoLength;
    public:
    PreetamVideo(string s, float r, float vl):Preetam(s,r){
        videoLength = vl;
    }
    void display(){
        cout<<"this is an amazing video with title : "<<title<<endl
            <<"Rating : "<<rating<<" out of 5 "<<endl
            <<"length of video : "<<videoLength<<endl;
    }
};
class PreetamText : public Preetam{
    int words;
    public:
    PreetamText(string s, float r, int wc):Preetam(s,r){
        words = wc;
    }
    void display(){
        cout<<"this is an amazing video with title : "<<title<<endl
            <<"Rating : "<<rating<<" out of 5 "<<endl
            <<"words of video : "<<words<<endl;
    }
};
int main(){
    string title;
    float rating, vlength;
    int word;

    title = "c++ tutorial";
    vlength = 4.56;
    rating = 4.5;
    word = 565;
    PreetamVideo obj(title, rating, vlength);
    obj.display();

    PreetamText obj2(title,rating,word);
    obj2.display();

    Preetam *ptr[2];
    ptr[0]=&obj;
    ptr[1]=&obj2;

    ptr[0]->display();
    ptr[1]->display();

return 0;
}