#include <iostream>
using namespace std;
//Destructor neveer takes the argument nor returns any value.
int count=0;
class num{
public:
num(){
    count++;
    cout<<"This is the time when constructor is called for the object number:"<<count<<endl;

}
~num(){
    cout<<"The is the time when the destructor is called for the object count:"<<count<<endl;
count--;
}
};

int main(){
cout<<"We are inside our main functions"<<endl;
cout<<"Creating the First objectn1 :"<<endl;
num n1;{ cout<<"Entering this block"<<endl;
    cout <<"Creating two more objects:"<<endl;
    num n2,n3;
cout<<"Exiting this block"<<endl; }
cout<<"Back to main"<<endl;
    return 0;
}