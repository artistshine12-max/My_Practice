#include<iostream>
using namespace std;
int main(){

int a,b,sum,sub,product,div,rem;
char oper;
cout<<"Enter the numbers a and b :"<<endl;
cin>>a>>b;
cout<<"Enter the operator:"<<endl;
cin>>oper;
switch(oper) {
   case '+' :
   cout<<"The Sum of a and b :"<<a+b<<endl;
   break;
   case '-' :
   cout<<"The Sub of a and b :"<<a-b<<endl;
   break;
   case '*' :
   cout<<"The product of a and b :"<<a*b;
   break;
   case '/' :
   cout<<"The Quotient of a and b :"<<a/b;
   break;
   case '%' :
   cout<<"The remainder :"<<a%b;
   break;
}

   return 0;  
}

