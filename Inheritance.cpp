#include <iostream>
using namespace std;
//Base Class:-
class Employee{
    
    public:
    int id;
      float salary;
    Employee(int inpid){
        id=inpid;
        salary=34.0;
    }
Employee(){}
};
//Derived Class:- 
/* class {{derived-class-name}} : {{visibility-mode}} {{base-class-name }}
{
    members/methods/etc...
} */ //Default visibility mode is private.
 //Private visibility mode :- Public members of the base classbecome the private members of the Derived class.
 //Public visibility mode:- Public members of the base class become the public members of the Derived class.
 //Private members of a base class can't be inherited i.e. the private members of a base class can never be inherited by the Derived class.
//Creatinga programmer class derived from the Employee Class:-
class Programmer : Employee{
    public :
    Programmer(int inpid){
        id=inpid;
    } 
    
int languageCode=9;
void getData(){
    cout<<id<<endl;
}
};
int main(){
Employee Harry(1), Rohan(2);
cout<<"\n "<<Harry.salary<<"\n "<<Rohan.salary<<endl;
Programmer skillf(10);
cout<<skillf.languageCode<<endl;
skillf.getData();
    return 0;
}