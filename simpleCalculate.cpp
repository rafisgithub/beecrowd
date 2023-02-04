#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int p1C,p1U,p2C,p2U;
	float p1P,p2P;
	double amountToBePaid=0;
	
	cin>>p1C>>p1U>>p1P;
	cin>>p2C>>p2U>>p2P;
	
	amountToBePaid = (p1U*p1P)+(p2U*p2P);
	
	cout<<"VALOR A PAGAR: R$ "<< fixed<<setprecision(2)<< amountToBePaid<<endl;
	
	
	return 0;
}
