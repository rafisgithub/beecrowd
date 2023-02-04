#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.14159

using namespace std;

int main(){
	float A, B, C;
	
	cin>>A>>B>>C;
	
	cout<<"TRIANGULO: "<<fixed << setprecision(3) << (0.5*A*C)<<endl;//triangle 
	cout<<"CIRCULO: "<<fixed << setprecision(3) << pi*pow(C,2)<<endl;//circle 
	cout<<"TRAPEZIO: "<<fixed << setprecision(3) << 0.5*(A+B)*C<<endl;//trapezium 
	cout<<"QUADRADO: "<<fixed << setprecision(3) << pow(B,2)<<endl;//square 
	cout<<"RETANGULO: "<<fixed << setprecision(3) <<A*B<<endl;//rectangle 
	
	return 0;
}
