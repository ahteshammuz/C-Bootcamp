#include<iostream>
using namespace std;
int main(){
	
	// Comparasion Operator
	
	int value1= 10, value2= 20 ;
	
	cout<<(value1 > value2) << endl;
	cout<<(value1 == value2) << "\n";
	cout<<(value1 <= value2) << "\n";
	cout<<(value1 != value2) << endl; 
	
	// Assignment Operator
	
	int gadget=100;
	float money= 500.75;
	
	gadget += 200;
  cout<< gadget << endl;
  
	gadget *= 5;
  cout<< gadget <<endl;
  
	gadget ^2 ;
  cout<< gadget << endl;
  
	money /= 5;
  cout<< money << endl;
	
	// Logical Operator
	
	// There are   4 members including 2 boys and 2 girls in a friend circle. They all going out for 2 weeks.
	// Values in Rupees
	
	int Rhan = 4000;
	int Yusuf = 4500;
	int Emma = 2000;
	int jannat= 1500;
	
	//Contribution of money
	
	int sum1= Rhan + Emma;
	int sum2= Yusuf + jannat;
	int sum3= Rhan +jannat;
	int sum4= Yusuf + Emma;
	
	bool success = ( sum1>= 5000) && (sum2>= 5000) && ( sum3>= 5000) && (sum4>= 5000);
	cout<< success;
		
	bool success1 = ( sum1>= 5000) || (sum2>= 5000) || ( sum3>= 5000) || (sum4>= 5000);
	cout<< success1;
}
