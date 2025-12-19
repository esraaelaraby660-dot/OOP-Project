#ifndef TEACHER_H
#define TEACHER_H
#include <Person.h>
#include <iostream>
using namespace std;

class Teacher:public Person
{
private:
    string subjectSpecialization;
    float salary;
public:
    Teacher()
    {
    }
    Teacher(string name,int age,string gender,string address,string phoneNumber
            ,string email,int id,string subjectSpecialization,float salary)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this-> phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->subjectSpecialization=subjectSpecialization;
        this->salary=salary;
    }
    ~Teacher()
    {
    }
    void setSubjectSpecialization(string subjectSpecialization)
    {
        this->subjectSpecialization=subjectSpecialization;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getSubjectSpecialization()
    {
        return subjectSpecialization;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"The SubjectSpecialization Is : "<<subjectSpecialization<<endl;
        cout<<"The Salary Is : "<<salary<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"Please Enter Your SubjectSpecialization: "<<endl;
        cin>>subjectSpecialization;
        cout<<"Please Enter Your Salary: "<<endl;
        cin>>salary;
         cout<<"The Teacher Is Added Successfully\n";
    }



};

#endif // TEACHER_H
