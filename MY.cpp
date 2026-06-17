#include <iostream>
using namespace std;
//Code 1:
/*class Employee{
    int Id;
    int salary;
    public:
    void setId(void){
        salary=122;
        cout<<"Enter the Id of the employee"<<endl;
        cin>>Id;
    }
    void getId(void){
        cout<<"The Id of the employee :"<<Id<<endl;
    }
};
int main(){
    Employee fb[4];
    for (int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}*/ 
//Code 2 :
/*class complex {
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a=v1;
        b=v2;
    }
    void setDataBySum(complex o1, complex o2){
        a=o1.a + o2.a;
        b=o1.b + o2.b;
    }
    void printNumber(){
        cout<<"Your complex number is :"<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setData(1,2);
    c1.printNumber();

        c2.setData(3,4);
    c2.printNumber();

     c3.setData(10,56);
    c3.printNumber();   
    return 0;
}  */
//code 3 :
/*class Complex{
    int a,b;
    friend Complex sumComplex(Complex o1, Complex o2);
    public :
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    //below line means thatnoon member -sumComplex function is allowed to anything with the private functions and the members of this class
void printNumber(){
    cout<<"Your Number is :"<<a<<"+"<<b<<"i"<<endl;
}
};
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1,c2,sum;
    c1.setNumber(2,4);
    c1.printNumber();
    c2.setNumber(5,6);
    c2.printNumber();

    return 0;
}*/
//code 4:
/*class Complex{
    int a,b;
    friend class Calculator;
    friend  Calculator :: sumRealComplex(Complex, Complex)


    friend Calculator :: sumCompComplex(Complex, Complex)
    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"Your number is :"<<a<<"+"<<b<<"i"<<endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2){
return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2){
return (o1.b + o2.b);
}
class Complex,
class Calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumRealComplex(Complex , Complex);
       int sumCompComplex(Complex , Complex);
};
int main(){
    Complex o1, o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int res=calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 :"<<res<<endl;
        int res=calc.sumCompComplex(o1,o2);
    cout<<"The sum of Complex part of o1 and o2 :"<<resc<<endl;
return 0;
}*/