#include <iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){}
    Number(int num){
        a=num;
    }//copy constructor:
    Number(Number &obj){
        cout<<"Copy constructor called:";
        a=obj.a;
    }
    void display(){
        cout<<"\nThe number for this object is:\n"<<a<<endl;
    }
};
int main(){

Number x, y, z(89);

z.display();
Number z1(z);// copy constructor invoked
z1.display();
    return 0;
}