#include<iostream>
#include<conio.h>

using namespace std;

 struct employee
 {
 	int EmpAge;
 	int EmpID;
 	char EmpName[20];
 	int EmpSalary;
 }empl;
 
 // void display (struct employee &empl);
 
 int main()
 {
 	//struct employee empl;
 	employee *ptr,empl;
 	ptr =&empl;
 	cout<<"Enter employee's age: ";
 	cin>>(*ptr).EmpAge;
 	cout<<"Enter employee's ID: ";
 	cin>>(*ptr).EmpID;
 	cout<<endl;
 	cout<<"Enter employee's Name: ";
 	cin>>(*ptr).EmpName;
 	//cout<<endl;
 	cout<<"Enter employee's Salary: ";
 	cin>>empl.EmpSalary;
 	cout<<endl;
 	cout<<endl;
 	cout<<"Name: "<<(*ptr).EmpName<<endl;
 	cout<<"Salary: "<<(*ptr).EmpSalary<<endl;
 	cout<<"ID: "<<(*ptr).EmpID<<endl;
 	cout<<"Age: "<<(*ptr).EmpAge<<endl;
    //display(empl);
 	system("pause");
 	return 0;
 }
 /* void display (struct employee &empl)
 {
 cout<<"Name: "<<empl.EmpName<<endl;
 	cout<<"Salary: "<<empl.EmpSalary<<endl;
 	cout<<"ID: "<<empl.EmpID<<endl;
 	cout<<"Age: "<<empl.EmpAge<<endl;
 }
