#include <iostream>
using namespace std;
int main(){
	cout  << " Press 1: To Add Income "<<endl;
	cout  << " Press 2: To Add Expense "<<endl;
	cout  << " Press 3: To View Balance  "<<endl;
	cout  << " Press 4: Exit  "<<endl;
	int income = 0;
	int expense = 0;
	int balance = 0;
	 int choice ;
	 do{
	 	cout<<" Enter your choice "<<endl;
	 	cin >> choice ;
	 	
	 	
	 	
	 	switch (choice){
	 		case 1:
	 			cout << " Add your Income "<<endl;
	 			cin >> income ;
	 			if ( income < 0){
	 				cout << " Enter Positive Num "<<endl;
				 }
				 income += balance;
				 break;
				 
				 case 2 :
				 	cout << " Add your Expense "<<endl;
	 			cin >> expense ;
	 			if ( expense > balance){
	 				cout << " Insufficent Balance For this Expense " << endl;
				 }
	 			expense -= balance;
				 break;
				 
				 case 3 :
				 	cout << " Your Balance  " << balance << " $ " <<endl;
				 	break ;
	 			
		 }	
	 	
	 } while ( choice != 4);
	 cout<< " Good Bye..."<<endl;
	

	return 0;
}
