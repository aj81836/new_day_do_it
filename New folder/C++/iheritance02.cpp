#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
        int id;
        string name;
    
    void putstudent(){
        cout<<"enter the all data: ";
        cin>> id >>name;
}
};

class techer : public student{
    public:
    void puts(){
        putstudent();
    }
    void gets(){
        cout<<"id=" <<id <<",name=" <<name <<endl;
    }
};

int main(){
    techer th;
    
    th.puts();
    th.gets();
    return 0;
    
}