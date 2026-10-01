//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 3 Assignment
//CODE:SPC 2204:OOP1

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Function to get employee deatils
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours, double &ratePerHour){
	
	cout<<"Enter Employees Name: "<<endl;
	getline(cin, name);
	cout<<"Enter Basic Salary: "<<endl;
	cin>>basicSalary;
	cout<<"Enter Overtime Hours: "<<endl;
	cin>>overtimeHours;
	cout<<"Enter Overtime Rate/Hour: "<<endl;
	cin>>ratePerHour;
	
}

//Function to calculate overtime pay
double calculateOvertimePay(double overtimeHours, double ratePerHour){
	return overtimeHours * ratePerHour;
}

//Function to calculate net salary
double calculateNetSalary(double basicSalary, double overtimePay){
	return basicSalary + overtimePay;
}

//Funcion to display the payslip
void displayPayslip(string name,double basicSalary,double overtimeHours,double ratePerHour,double overtimePay, double netSalary){
	cout<<"\n====================================\n";
    cout<<"            PAYSLIP\n";
	cout<<"======================================\n";
	cout<<fixed<< setprecision(2);
	
	cout<<"Employee name     : "<<name<<endl;
	cout<<"Basic Salary      :"<<basicSalary<<endl;
	cout<<"Overtime Hours    :"<<overtimeHours<<endl;
	cout<<"Overtime Rate/Hour:"<<ratePerHour<<endl;
	cout<<"Overtime Pay      :"<<overtimePay<<endl;
	cout<<"-----------------------------\n";
	cout<< "Net Salary       :"<<netSalary<<endl;
	
	cout<<"=======================================\n";
	
}

int main(){
	//Variables to store employee information
	string name;
	double basicSalary;
	double overtimeHours;
	double ratePerHour;
	
	//Variables to store calculated values
	double overtimePay;
	double netSalary;
	
	getEmployeeDetails(name, basicSalary,overtimeHours, ratePerHour);
	overtimePay = calculateOvertimePay(overtimeHours,ratePerHour);
	netSalary = calculateNetSalary(basicSalary,overtimePay);
	displayPayslip(name,basicSalary,overtimeHours,ratePerHour,overtimePay,netSalary);
	
	return 0;
}