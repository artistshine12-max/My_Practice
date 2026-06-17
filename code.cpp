#include <iostream> // Required for input/output operations
using namespace std;
int main() {
    int a,b,sum,sub,mult,div,rem;
    cout<<"Enter the numbers a and b:\n";
    cin>>a>>b;
    sum=a+b;
    sub=a-b;
mult=a*b;
div=a/b;
rem=a%b;
    cout<<"\nsum of two numbers: "<<sum;
    cout<<"\nsub of two numbers: "<<sub;
    cout<<"\nmult of two numbers: "<<mult;
    cout<<"\ndiv of two numbers: "<<div;
    cout<<"\nrem is:\n"<<rem;
    

    return 0; // Indicate successful program termination
}


//there are two types of header files:
//1.System header files : These come with the compiler.
#include <cmath>
//2.User defined header files: These are written by the user.
