#include <iostream>
using namespace std;
class Student
{
protected:
    int rollNo;

public:
    void setrollNumber(int);
    void getrollNumber(void);
};
void Student::setrollNumber(int r)
{
    rollNo = r;
}
void Student ::getrollNumber()
{
    cout << "The roll Number is :" << rollNo << endl;
}
class Exam : public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void Exam ::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
};
void Exam ::getMarks()
{
    cout << "The roll is :" << rollNo << endl;
    cout << "The marks in Maths is :" << maths << endl;
    cout << "The marks in Physics is :" << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        getrollNumber();
        getMarks();
        cout << "Your percentage is :" << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result harry;
    harry.setrollNumber(120);
    harry.setMarks(98, 98);
    harry.getMarks();
    harry.display();
    return 0;
}
/*If we are Inheriting B from A and c from B:[a-->B-->c]
1. A is the base class for B and B is the base class for the C
2. A-->B-->C is called Inheritence Path.
 */