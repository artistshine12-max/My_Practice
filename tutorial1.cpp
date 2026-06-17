#include <iostream>
using namespace std;

    class Employee
    {
        private:
        int a,b,c;
        public :
        int d,e;
        void setData(int a1,int b2, int c3);
        void getData(){
            cout<<"The value of a :"<<a<<endl;
            cout<<"The value of b :"<<b<<endl;
            cout<<"The value of c :"<<c<<endl;
            cout<<"The value of d :"<<d<<endl;
cout<<"The value of e :"<<e<<endl;}
        };
void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
c=c1;

}
int main(){

Employee Harry;
Harry.d=34;
Harry.e=89;
    Harry.setData(1,2,4);
    Harry.getData();
    return 0;
}