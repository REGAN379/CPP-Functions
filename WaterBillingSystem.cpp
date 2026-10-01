//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 3 Assignment
//CODE:SPC 2204:OOP1

#include <iostream>
using namespace std;

const float RATE_PER_UNIT = 50;

void getCustomerDetails(string &name, float &units){
	cout<<"Enter Customer Name: "<<endl;
	getline(cin,name);
	cout<<"Enter number of units consumed: "<<endl;
	cin>>units;

	
}

float calculateBill(float units){
	return units * RATE_PER_UNIT;
}

float applyDiscount(float totalBill, float units){
	if(units >100){
		return totalBill * 0.10;
	}
    else{
		return 0;
	}

}
void displayBill(string name,float units,float totalBill,float discount,float finalAmount){
	cout<<"\n====================================\n";
	cout<<"            WATER BILL\n";
	cout<<"======================================\n";
	
	cout<<"Customer Name        : "<<name<<endl;
	cout<<"Units Consumed       : "<<units<<endl;
	cout<<"Rate Per Unit        : "<<RATE_PER_UNIT<<endl;
	cout<<"---------------------------------------\n";
	cout<<"Bill Before Discount : "<<totalBill<<endl;
	cout<<"Dicount              : "<<discount<<endl;
	cout<<"Final Amount Payable : "<<finalAmount<<endl;
	cout<<"=========================================\n";
	
}

int main(){
	
	//Variables for customer information
	string name;
	float units;
	
	//Variables for bill calculations
	float totalBill;
	float discount;
	float finalAmount;
	
	//Function calls
	getCustomerDetails(name,units);
	totalBill = calculateBill(units);
	discount = applyDiscount(totalBill,units);
	
	finalAmount = totalBill - discount;
	
	displayBill(name,units,totalBill,discount,finalAmount);
	
return 0;
}