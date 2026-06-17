#include <iostream>
using namespace std;
/*
Case1 :
class : public A{
//Order of execution of constructor -> first A() then B()
};
Case 2:
class A: public B, public C{
//Order of execution of constructor -> First B() then C()
 };
 Case3 : 
 class A: public B, virtual public C {
 //Order of execution -> First C() then B() and 
 A()
 };*/
 class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base Class constructor called"<<endl;
    
    }
    void printData(void){
        cout<<"THe value of data1 is "<<data1<<endl;
    }
 };
 class Base2{
    int data2;
    Base2(int j){
        data2=j;
        cout<<"The Base class constructor called "<<endl;
    }
    void printData2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
 };
class Derived : public Base2, public Base1{
    int derived, derived1, derived2;
    public:
   Derived( int b, int c, int d) {  
    derived=b;
    derived1 = c;
    derived2 = d;
cout<<"Derived class constructor called "<<endl;
   }
    void printDataDerived(void){
        cout<<"The value of derived1 is :"<<derived1<<endl;
        cout<<"The value of derived2 is :"<<derived2<<endl;
    }
};
int main(){
Derived harry(2,3,4);
harry.printDataDerived();
    return 0;
}