#include<iostream>
using namespace std;

class GFG_Base{
    public:
        virtual void display(){
            cout<<"called virtual Base Class function"<<"\n\n";
        }
    void printf(){
        cout<<"called GFG_Base printf function"<<"\n\n";
    }
};

class GFG_child : public GFG_Base{
    public:
        void display(){
            cout<<"called GFG_child printf function"<<"\n\n";
        }
        void print(){
            cout<<"called GFG_child print function"<<"\n\n";
        }
};

int main(){
    GFG_Base* base;

    GFG_child child;

    base = &child;
    base->display();
    base->printf();
}