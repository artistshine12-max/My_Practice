#include <stdio.h>
#include<string.h>
int main(){
    struct student{
        int RollNo;
        float Percent;
        char Grade;
        char CGPA[14];
    };
    printf("\n<<<<<==================ssssssssss=======================>>>>>\n");
    struct student Raghav;
    Raghav.RollNo=88;
    Raghav.Grade='A';
    Raghav.Percent=98.5;
    printf("Student Name: Raghav\n");
    printf("RollNo: %d\n",Raghav.RollNo);
    printf("Grade: %c\n",Raghav.Grade);
    printf("Percent: %f\n",Raghav.Percent);
    strcpy(Raghav.CGPA,"Good");
    puts(Raghav.CGPA);
    printf("\n=============================================\n");

    struct student Harsh;
     Harsh.RollNo=80;
    Harsh.Grade='B';
    Harsh.Percent=93.5;
    printf("Student Name: Harsh\n");
    printf("RollNo: %d\n",Harsh.RollNo);
    printf("Grade: %c\n",Harsh.Grade);
    printf("Percent: %f\n",Harsh.Percent);
     printf("\n=============================================\n");

    struct student Sam;
     Sam.RollNo=54;
    Sam.Grade='A';
    Sam.Percent=93.5;
    printf("Student Name: Sam\n");
    printf("RollNo: %d\n",Sam.RollNo);
    printf("Grade: %c\n",Sam.Grade);
    printf("Percent: %f\n",Sam.Percent);
     printf("\n<<<<<==================ssssssssssssss===============>>>>>\n");
    return 0;
}