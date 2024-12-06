#include<bits/stdc++.h>

using namespace std;

class show{
public:
void func(int x){
    cout<<"value of x:"<<x<<endl;
}
void func(int x,int y){
    cout<<"value of x and y is " << x <<" ,"<< y<< endl;
}
void func(double x){
    cout<<"value of x:"<<x<<endl;
}
};


int main(){
    show obj1;
    obj1.func(11);
    obj1.func(11,12);
    obj1.func(1.11);
    return 0;
}