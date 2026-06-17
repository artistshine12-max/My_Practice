#include <iostream>
using namespace std;
int main(){
    int a,b, sum,sub, product,quotient,rem;
   char oper;
    cout<<"Enter the a and b :\n"<<endl;
    cin>>a>>b;
    cout<<"Enter the operator:\n"<<endl;
    cin>>oper;
    switch(oper) {
        case '+':
        cout<<"The sum is :"<<(a+b);
        break;
        case '-' :
        cout<<"The sub is :"<<(a-b);
        break;
        case '*' :
        cout<<"The product is :"<<(a*b);
        break;
        case '/' :
        cout<<"The quotient is :"<<(a/b);
        break;
        case '%' :
        cout<<"The remainder is :"<<(a%b);
    }

}