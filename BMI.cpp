#include <iostream>
using namespace std;

  float weight;
  float height;
  float BMI;
 
int main()
{
	cout<<"Enter your weight"<<endl;
	cin>>weight;
	
	cout<<"Enter your height"<<endl;
	cin>>height;
	BMI=weight/(height*height);
	 
	cout<<"Your Body Mass Index is "<<BMI<<endl;
	
	if(BMI<18.5){
		cout<<"You are underweight."<<endl;
	}
	else if(BMI>=18.5&&BMI<=24.9){
		cout<<"You have normal weight."<<endl;
	}
	else if(BMI>=25&&BMI<=29.9){
		cout<<"You are overweight."<<endl;
	}
	else if(BMI>=30){
		cout<<"You are obese."<<endl;
	}
	return 0;
	
}