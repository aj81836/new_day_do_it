#include<iostream>
#include<stdio.h>
using namespace std;
int n,i;
//static int n,i;

class stud
{
    int id;
    char name[30];
    public:
    void getstud();
    void putstud();
};
void stud::getstud()
{
    cin>>id >> name;
    
}
void stud::putstud()
{
    cout<<"ID="<<id<<"\tname="<<name<<endl;
}

int main()
{
    stud s[60];
    //int n,i;
    cout<<"Enter number n:"<<endl;
    cin>>n;
      if(n<1 || n>60)
       cout<<"enter reagin"<<endl;
       else
        for(i=0;i<n;i++)
         s[i].getstud();
       
       for ( i = 0; i < n; i++)
       {
         s[i].putstud();
       }
};