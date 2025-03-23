#include <iostream>
using namespace std;

int salary;
int YOS;

int main(){
	
	cout<<"Enter the salary you earn. ";
	cin>>salary;

	cout<<"Enter your years of service. ";
	cin>>YOS;
	
	if(YOS>10){
		
		cout<<0.12*salary;
	}
	else if(YOS>=6&&YOS<=10){
		
		cout<<0.01*salary;
	}
	else if(YOS<6){
		
		cout<<0.08*salary;
	}
	return 0;
}