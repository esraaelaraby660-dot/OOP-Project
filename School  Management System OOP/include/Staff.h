#ifndef STAFF_H
#define STAFF_H
#include <Person.h>
#include <iostream>
using namespace std;

class Staff:public Person
{
private:
    string role;
    float salary;
public:
    Staff()
    {
    }
    Staff(string name,int age,string gender,string address,
          string phoneNumber,string email,int id, string role,float salary)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this-> phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->role=role;
        this->salary=salary;

    }
    ~Staff()
    {
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"The Role Is : "<<role<<endl;
        cout<<"The Salary Is : "<<salary<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"Please Enter Your Role: "<<endl;
        cin>>role;
        cout<<"Please Enter Your Salary: "<<endl;
        cin>>salary;
         cout<<"The Staff Is Added Successfully\n";
    }

};

#endif // STAFF_H
