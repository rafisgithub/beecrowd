#include <iostream>
using namespace std;

int main(){
	
	int A,B,C,D,Pab,Pcd,dif;
	
	cin>>A>>B>>C>>D;
	
	Pab=A*B;
	Pcd=C*D;
	dif=Pab-Pcd;
	
	cout<<"DIFERENCA = "<<dif<<endl;
	return 0;
}
