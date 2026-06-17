#include<iostream>
using namespace std;
 struct employee{
    int roll_no;
    char fav_char;
    double salary;

};
int main(){
    struct employee shine={20,'s',19000000000};
struct employee sam;
sam.roll_no=20;
sam.fav_char='A';
sam.salary=2000;
cout<<"the salary of sam is: "<<sam.salary<<endl;


    return 0;
}
