#include<iostream>
using namespace std;
struct employee
{
    int empno;
    char ename[20];
    float basic,hra,da;
};
employee* getdata()
{
    employee *e;
    e=new employee;
    cout<<"\nEnter empno: ";
    cin>>e->empno;
    cout<<"\nEnter ename: ";
    cin>>e->ename;
    cout<<"\nEnter basic: ";
    cin>>e->basic;
    cout<<"\nEnter hra: ";
    cin>>e->hra;
    cout<<"\nEnter da: ";
    cin>>e->da;

    return e;
}
float calculate(employee *e)
{
    return((e->basic)+(e->hra)+(e->da));
}
void display(employee *e)
{
    cout<<"\nEmpno:"<<e->empno
        <<"\nEname:"<<e->ename
        <<"\nBasic:"<<e->basic
        <<"\nHra:"<<e->hra
        <<"\nDa:"<<e->da
        <<"\n Gross salary"<<calculate(e);
}
int main()
{
    employee *e;
    e=getdata();
    display(e);
    return 0;
}