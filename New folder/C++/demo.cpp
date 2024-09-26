#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

class employee
{
public:
int empID;
string empName;
double empSalary;

void AcceptData()
{
    printf("Enter empID:");
    scanf("%d",&empID);

    printf("Enter empName:");
    scanf("%s",&empName);

    printf("Enter empSalary:");
    scanf("%ld",&empSalary);
}

void printDate()
{
    printf("empID:%d\n empName:%s\n empSalary:%ld\n",empID,empName,empSalary);

}
};

int main()
{
employee e1;
e1.AcceptData();
e1.printDate();
return 0;
}
