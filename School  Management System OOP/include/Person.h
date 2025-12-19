#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;


class Person
{
protected:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
    int id;

public:
    Person()
    {
    }
    Person(string name,int age,string gender,string address,string phoneNumber,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this-> phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;


    }
    ~Person()
    {
    }
    void setName( string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this-> phoneNumber=phoneNumber;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    void setID(int id)
    {
        this->id=id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    int getId()
    {
        return id;
    }

    void print()
    {
        cout<<"The Name Is : "<<name<<endl;
        cout<<"The Age Is : "<<age<<endl;
        cout<<"The Gender Is : "<<gender<<endl;
        cout<<"The Address Is : "<<address<<endl;
        cout<<"ThePhoneNumber Is : "<<phoneNumber<<endl;
        cout<<"The Email Is : "<<email<<endl;
        cout<<"The ID Is : "<<id<<endl;
    }
    void information()
    {
        cout<<"Please Enter Your Name: "<<endl;
        cin>>name;
        cout<<"Please Enter Age Of "<<name<<endl;
        cin>>age;
        cout<<"Please Enter Your Gender: "<<endl;
        cin>>gender;
        cout<<"Please Enter Your Address: "<<endl;
        cin>>address;
        cout<<"Please Enter Your PhoneNumber: "<<endl;
        cin>>phoneNumber;
        cout<<"Please Enter Your Email: "<<endl;
        cin>>email;
        cout<<"Please Enter Your ID: "<<endl;
        cin>>id;

    }



};

#endif // PERSON_H
