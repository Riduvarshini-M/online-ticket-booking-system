#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int train1_total_seats=500;
int train2_total_seats=600;
int train3_total_seats=590;

int avail_seats_train1=500;
int avail_seats_train2=600;
int avail_seats_train3=590;

class train_details
{
    train_details()
    {
        cout<<"Train 1:"<<endl;
        cout<<"Total seats in train 1: "<<train1_total_seats<<endl;
        cout<<"Available seats in train 1: "<<avail_seats_train1<<endl<<endl;

        cout<<"Train 2:"<<endl;
        cout<<"Total seats in train 2: "<<train2_total_seats<<endl;
        cout<<"Available seats in train 2: "<<avail_seats_train2<<endl<<endl;

        cout<<"Train 3:"<<endl;
        cout<<"Total seats in train 3: "<<train3_total_seats<<endl;
        cout<<"Available seats in train 3: "<<avail_seats_train3<<endl<<endl;
    } 
};

class ticket_allocation
{
    public:
    void book_ticket()
    {
        int train_number;
        cout<<"Enter the train number you wish to travel";
        cin>>train_number;
        if(train_number==1)
        {
            train1_total_seats-=1;
            cout<<"Ticket has been booked succesfully in train 1";
        }
        else if(train_number==2)
        {
            train2_total_seats-=1;
            cout<<"Ticket has been booked succesfully in train 2";
        }
        else
        {
            train3_total_seats-=1;
            cout<<"Ticket has been booked succesfully in train 3";
        }
    }
    void cancel_ticket()
    {
       int train_number;
        cout<<"Enter the train number you wish cancel the ticket";
        cin>>train_number;
        if(train_number==1)
        {
            train1_total_seats+=1;
            cout<<"Ticket has been cancelled succesfully in train 1";
        }
        else if(train_number==2)
        {
            train2_total_seats+=1;
            cout<<"Ticket has been cancelled succesfully in train 2";
        }
        else
        {
            train3_total_seats+=1;
            cout<<"Ticket has been cenacelled succesfully in train 3";
        } 
    }
};

int main()
{
    cout<<"Welcome to online Train Ticket Booking System"<<endl;
    cout<<"Enter your Choice: "<<endl<<"1. Check train status"<<endl<<"2. Book Ticket"<<endl<<"3. View ticket Details"<<endl<<"4. Cancel ticket"<<endl<<"5. Exit"<<endl;
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1: 
        {
            train_details td();
            break;
        }
        case 2: 
        {
            ticket_allocation ta;
            ta.book_ticket();
            break;
        }
        case 3:
        {
            ticket_allocation ta;
            ta.cancel_ticket();
            break;   
        }
    }
}