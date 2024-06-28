#include<iostream>
using namespace std;
int main(){
	float a;
	float b;
	
	cin>>a>>b;
	if(a>0.01 || b>a){
		cout<<"The statement is correct in given condition.";
			}else{
				cout<<"The statement is wrong.";
			}
			return 0;
	}

//marks conditional statement using if-else condition
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Student,please enter the marks to calculate the grade: ";
	cin>>marks;
	if(marks>90){
		cout<<"A";
	}
	else if(marks>80){
		cout<<"B";
	}
	else if(marks>70){
		cout<<"C";
	}
	else{
		cout<<"PASS";
	}
	}

#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	switch(num){
		case 1:
			cout<<"The value of a is 1";
			break;
		case 2:
			cout<<"The value of a is 2";
			break;
		case 3:
			cout<<"The value of a is is 3";
			default:
				cout<<"Default will be always printed.";
	}
	}