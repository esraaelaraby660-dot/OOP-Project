#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include <Contact.h>
#include <PhoneNumber.h>
using namespace std;


class ContactBook
{
private:
    int Count;
    Contact contacts[1500];
    Contact c;


public:
    ContactBook() {Count=0;}
    ContactBook(int Count)
    {
        this->Count=Count;
    }
    void setCount(int Count)
    {
        this->Count=Count;
    }
    int getCount()
    {
        return Count;
    }
    void addContact(Contact con)
    {
        if(Count==1500)
        {
            cout<<"This Contact Book List Is Full\n";
        }
        else
        {
            contacts[Count]=con;
            Count++;


            cout<<"The Contact Is Added Successfully\n";
        }
        cout<<"\n\n";
    }

    void deleteContact(int id)
    {    int i;

            for( i=0; i<Count; i++)
            {
                if(contacts[i].getId()==id)
                {
                    contacts[i]=contacts[Count-1];
                    Count--;
                    break;
                }

            }

        if(i==Count)

        {
            cout<<"This Contact Want To Delete Not Found\n";

        }
        cout<<"\n\n\n";

        }



    void searchContact(int id)
    {
       int i;
        {
            for(int i=0; i<Count; i++)
            {
                if(contacts[i].getId()==id)
                {
                     cout<<"The Contact Is Found : "<<endl;
                    contacts[i].print();
                    break;
                }
            }
            if(i==Count)
            {
                cout<<"The Contact Is Not Found \n";
            }
            cout<<"\n\n\n";
        }

    }

    void editContact (int id)
    {
        Contact c;
        int i;
        for(int i=0; i<Count; i++)
        {
            if(contacts[i].getId()==id)
            {
                contacts[i].information();
                cout<<"The Contact Edit Scuessfully\n";
                break;
            }
        }
        if(i==Count)
        {
            cout<<"The Contact Is Not Found \n";
        }
        cout<<"\n\n\n";
    }

    void displayAllContacts()
    {
         if(Count!=0)
        {
        cout<<"______________________________________________"<<endl;
        cout<<"______________________________________________"<<endl;
        for(int i=0; i<Count; i++)
        {
            contacts[i].print();

          cout<<"______________________________________________"<<endl;
        }

        cout<<"______________________________________________"<<endl;


        }
        else{
                 cout<<"This Contact Book List Is Empty\n";

        }

        cout<<"\n\n\n";
    }
     void countContact()
    {
        if(Count==0)
        {
            cout<<"This Contact Book List Is Empty\n";
            cout<<"\n\n\n";
        }
        else

        {cout<<"The Count Contacts In Contact Book Is : "<<Count<<endl;
        cout<<"\n\n\n";
        }
    }

    ~ContactBook() {}




};

#endif // CONTACTBOOK_H
