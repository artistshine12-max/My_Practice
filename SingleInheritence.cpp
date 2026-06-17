#include <iostream>
using namespace std;
class base{
    int data1;
    public:
    
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
    base(){}
};
void base :: setdata(void){
    data1=10; 
    data2=20;  
}
int base :: getdata1(){
    return data1;
}
int base :: getdata2(){
    return data2;
}
class derived : public base{ //class is being derived publically.
   public: int data3;
void process();
int display();
};
void derived :: process(){
    data3=data2*getdata1();
}
int derived :: display(){
    cout<<"The value of data1 is :"<<getdata1()<<endl;
    cout<<"The value of data2 is :"<<data2<<endl;
    cout<<"The value of data3 is :"<<data3<<endl;
}
int main(){
    derived der;
    der.setdata();
der.process();
der.display();

    return 0;
}