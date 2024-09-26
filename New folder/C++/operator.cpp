#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
/*
class test
{
private:
int a;
    
public:
void get()
{
    cin>>a;
}
void operator==(test t2)
{
    if(a==t2.a)
    cout<<"object are equal";
    else cout<<"Object are not equal";

}
};

int main()
{
    test t1,t2;
    cout<<"Enter the object value"<<endl;
    t1.get();
    cout<<"enter t2 value"<<endl;
    t2.get();
     t1 == t2;
    
};
*/

class test
{
    //char st[100];
    public:
    char st[10];
    void get()
    {
        cout<<"enter string="<<endl;
        cin>>st;
        
    }
    void show()
    {
        cout<<"string="<<st<<endl;
    }
    test operator+(test t2)
    {
        test t3;
         strcpy(t3.st, st);
         strcat(t3.st, " ");
         strcat(t3.st, t2.st);
         return t3;
    }

};

int main()
{
    test t1,t2,t3;
    t1.get();
    t2.get();
    t3= t1 + t2;
    t3.show();
    return 0;
}

/*
#include <iostream>
#include <cstring> // For strcpy and strcat

using namespace std;

class Test
{
public:
    char st[100];

    void get()
    {
        cout << "Enter string: " << endl;
        cin >> st;
    }

    void show()
    {
        cout << "String: " << st << endl;
    }

    Test operator+(const Test& t2) const
    {
        Test t3;
        strcpy(t3.st, st); // Copy the first string
        strcat(t3.st, " "); // Add a space
        strcat(t3.st, t2.st); // Concatenate the second string
        return t3;
    }
};

int main()
{
    Test t1, t2, t3;
    t1.get();
    t2.get();
    t3 = t1 + t2; // Use the overloaded operator+
    t3.show();

    return 0;
}
*/