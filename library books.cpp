#include <iostream>
using namespace std;

 int bookID;
 int dueDate;
 int returnDate;
 int daysoverdue;
 int fineamount;
 int finerate;
int main(){	
	
	cout<<"Enter book ID"<<endl;
	cin>>bookID;
	
	cout<<"Enter due date"<<endl;
	cin>>dueDate;
	
	cout<<"Enter return date"<<endl;
	cin>>returnDate;
	
	daysoverdue=returnDate-dueDate;
	cout<<"Your days overdue are "<<daysoverdue<<" days"<<endl;
	
	if(daysoverdue<=7){
		cout<<"Book Number: "<<bookID<<endl;
		cout<<"The due date was "<<dueDate<<endl;
		cout<<"Your return date is "<<returnDate<<endl;
		cout<<"Your fine rate is 20kshs per day "<<endl;
		cout<<"Your fine amount is ";
		cout<<20*daysoverdue;
	}
	else if(daysoverdue>=8&&daysoverdue<=14){
		cout<<"Book Number: "<<bookID<<endl;
        cout<<"The due date was "<<dueDate<<endl;
		cout<<"Your return date is "<<returnDate<<endl;
		cout<<"Your fine rate is 50kshs per day "<<endl;
		cout<<"Your fine amount is ";
		cout<<50*daysoverdue;
	}
	else if(daysoverdue>=15){
		cout<<"Book Number: "<<bookID<<endl;
        cout<<"The due date was "<<dueDate<<endl;
		cout<<"Your return date is "<<returnDate<<endl;
		cout<<"Your fine rate is 100kshs per day "<<endl;
		cout<<"Your fine amount is ";
		cout<<100*daysoverdue;
	}
	
	return 0;
}