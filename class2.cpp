#include <iostream>
using namespace std;
class circle{
    private:
    float rad,cir,ar;

public:
void radious();
void circlc();
void arcirclc();
};
void circle:: radious(){
    
    cout<<"enter the redious of circle =";
cin>>rad;
}
void circle:: circlc(){
    cir= 2*3.14*rad;
  cout<<"cir="<<cir<<endl;
}
void circle:: arcirclc(){
    ar=3.14*rad*rad;
    cout<<"ar="<<ar<<endl;
    }
    int main(){
        circle ab;
        ab.radious();
        ab.circlc();
        ab.arcirclc();
    }
