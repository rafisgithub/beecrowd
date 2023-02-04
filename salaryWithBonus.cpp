#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	
	string Sname;
	cin>>Sname;
	
	double fSalary;
	cin>>fSalary;
	
	double tSalary;
	cin>>tSalary;
	
	double finalSalary=0;
	
	finalSalary = fSalary + (tSalary*0.15);
	
	cout<<"TOTAL = R$ "<<fixed << setprecision(2)<<finalSalary<<endl;
	
 
    return 0;
}
