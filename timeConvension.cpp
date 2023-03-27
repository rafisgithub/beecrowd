#include<iostream>

using namespace std;

int main(){
//	int seconds;
//	cin>>seconds;
//	int hours = seconds / 3600;
//	int rs= seconds%3600;
//	int minutes = rs / 60;
//	rs = rs %60;
//	cout<<hours<<":"<<minutes<<":"<<rs<<endl;
   int s;
   cin>>s;
   int h = s /3600;
   s = s %3600;
   int m = s /60;
   s = s % 60;
   cout<<h<<":"<<m<<":"<<s<<endl;
return 0;
}
