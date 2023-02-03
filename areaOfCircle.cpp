#include <iostream>
#include<iomanip>
#define PI 3.14159
using namespace std;
 
int main() {
	
	double R;
	double A;
	
	cin>>R;
	A=PI*R*R;
	
	cout<<"A="<<fixed<<setprecision(4)<<A<<endl;;
	
 
    return 0;
}
