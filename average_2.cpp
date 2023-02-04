#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	double gradeA, gradeB, gradeC, average=0;
	
	cout<<fixed<<setprecision(1);
	cin>>gradeA>>gradeB>>gradeC;
	
	average=(gradeA*2+gradeB*3+gradeC*5)/(2+3+5);
	
	cout<<"MEDIA = "<<fixed<<setprecision(1)<<average<<endl;
	
	return 0;
}
