#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.14159

using namespace std;

int main(){
	
	int r;
	double area;
	
	cin>>r;
	
	area = (4.0/3.0)*PI*pow(r,3);
	
	cout<<"VOLUME = "<<fixed<<setprecision(3)<<area<<endl;
	
	return 0;
}

