#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;
}
int main(){
int num1, num2;
cout<<"Enter the numbers:"<<endl;
cin>>num1>>num2;
cout<<"The sum is: "<<sum(num1, num2)<<endl;
    return 0;
}