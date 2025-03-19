#include <iostream>
using namespace std;
  
  int age;
  int income;
int main()
{
	
	cout<<"Enter your age"<<endl;
	cin>>age;
	
	cout<<"Enter your income"<<endl;
	cin>>income;
	
	if(age>=21&&income>=21000){
		cout<<"Congratulations you qualify for aloan"<<endl;
	}
	else{
		cout<<"Unfortunately ,we are unable to offer you a loan at this time"<<endl;
	}
	return 0;
}