#ifndef CONTACT_H
#define CONTACT_H
#include <PhoneNumber.h>
#include <iostream>
using namespace std;

class Contact
{
private:
    string name;
    PhoneNumber phones[4];
    int counter;
    int id;
    string gender;
    string city;
    string email;


public:
    Contact()
    {
    }
    Contact(string name,int id,string gender,string city,string email)
    {
        this ->name=name;
        this->id=id;
        this->gender=gender;
        this->city=city;
        this->email=email;
    }
    void setName(string name)
    {
        this->name=name;
    } void setId(int id)
    {
        this->id=id;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setCity(string city)
    {
        this->city=city;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    string getGender()
    {
        return gender;
    }
    string getCity()
    {
        return city;
    }
    string getEmail()
    {
        return email;
    }
    void print()
    {

        cout<<"The Name Is :"<<name<<endl;
        cout<<"The ID Is :"<<id<<endl;
        cout<<"The Gender  Is :"<<gender<<endl;
        cout<<"The City Is :"<<city<<endl;
        cout<<"The Email Is :"<<email<<endl;
        for(int i=0;i<counter;i++)
        {
            phones[i].print();
        }



    }
    void information()
    {

        cout<<"Please Enter Your  Name \n";
        cin>>name;
        cout<<"Please Enter Your  ID \n";
        cin>>id;
        cout<<"Please Enter Your  Gender \n";
        cin>>gender;
        cout<<"Please Enter Your  City \n";
        cin>>city;
        cout<<"Please Enter Your  Email \n";
        cin>>email;
        cout<<"Please Enter Count Of Phone Numbers (1 - 4)  \n";
        cin>>counter;
        for(int i=0;i<counter;i++)
        {
            phones[i].information();
        }


    }
  /*  void addPhoneNumber()
    {
       PhoneNumber ph;
       ph.information();
        if(phonecounter==4)
        {
            cout<<"This Employee's Phone Number List Is Full\n";
        }
        else
        {


            phones[phonecounter]=ph;
            phonecounter++;


        }
    }*/
   /* void deletePhoneNumber(string phoneNumber)
    {
        if(phonecounter==0)
        {
            cout<<"This Employee's Phone Number List Is Empty\n";
        }
        else
        {   for(int i=0;i<phonecounter;i++)

           if( phones[i].getPhoneNumber()==phoneNumber)
           {
              phones[i] =phones[phonecounter-1];
              phonecounter--;
              break;
           }

        }
    }*/

    ~Contact() {}




};

#endif // CONTACT_H
