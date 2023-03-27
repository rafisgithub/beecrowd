#include<iostream>

using namespace std;

int  main(){
//	int days;
//	cin>>days;
//	int year = days / 365;
//	cout<<year<<" ano(s)"<<endl;
//	
//	int remainingDays = days % 365;
//	int months = remainingDays / 30;
//	cout<<months<<" mes(es)"<<endl;
//	
//	remainingDays = remainingDays % 30;
//	cout<<remainingDays<<" dia(s)"<<endl;
   
   int d;
   cin>>d;
   
   int y = d / 365;
   d = d % 365;
   int m = d / 30;
   d = d % 30;
   
   cout<<y<<" ano(s)\n"<<m<<" mes(es)\n"<<d<<" dia(s)\n";
	return 0;
}
