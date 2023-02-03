#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double A;
	double B;
	double AVG;
	
	cout<<fixed<<setprecision(1);
	cin>>A>>B;
	
	AVG = (A*3.5 + B*7.5)/(3.5+7.5);
	
	cout<<"MEDIA = "<<fixed<<setprecision(5)<<AVG<<endl;
	
   return 0;
}

