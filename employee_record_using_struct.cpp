#include<iostream>
#include<conio.h>
using namespace std;

struct emp{
          float salary;
          int emp;
          int grade;
};
int main()
{
	emp e1,e2;
	e1.emp = 56;
	e1.salary = 3443.4;
	
	cout<<"Salaries: "<<e1.salary<<endl;
	cout<<"Employees: "<<e1.emp<<endl;
	
	e2.emp = 50;
	e2.salary = 3234.4;
	
	cout<<"Salary: "<<e2.salary<<endl;
	cout<<"Employee: "<<e2.emp<<endl;
}
