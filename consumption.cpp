#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int distance;
	float fuel;
	float avgConsumption=0;
	
	cin>>distance>>fuel;
	
	avgConsumption = distance/fuel;
	
	cout<< fixed <<setprecision(3) <<avgConsumption<<" km/l"<<endl;
	
	return 0;
}
