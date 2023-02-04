#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	
	int a,b,c,greatest=0,maiorAB=0;
	cin>>a>>b>>c;
	
//	greatest = max(max(a,b),c);


    maiorAB = (a + b + abs(a-b))/2;
    greatest =(maiorAB + c + abs(maiorAB-c))/2;
     
	
	cout<<greatest<<" eh o maior"<<endl;
	
 
    return 0;
}
