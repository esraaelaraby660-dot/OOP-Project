#ifndef STUDENT_H
#define STUDENT_H
#include <Person.h>
#include <iostream>
using namespace std;

class Student:public Person
{
private:
    string gradeLevel;
    float GPA;
public:
    Student()
    {
    }
    Student(string name,int age,string gender,string address,
            string phoneNumber,string email,int id,string gradeLevel,float GPA)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this-> phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->gradeLevel=gradeLevel;
        this->GPA=GPA;
    }
    ~Student()
    {
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGPA(float GPA)
    {
        this->GPA=GPA;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGPA()
    {
        return GPA;
    }
    void print()
    {
        Person::print();
        cout<<"The Grade Level Is : "<<gradeLevel<<endl;
        cout<<"The GPA Is : "<<GPA<<endl;

    }
    void information()
    {
        Person ::information();
        cout<<"Please Enter Your Grade Level: "<<endl;
        cin>>gradeLevel;
        cout<<"Please Enter Your GPA: "<<endl;
        cin>>GPA;
        cout<<"The Student Is Added Successfully\n";
    }




};

#endif // STUDENT_H
