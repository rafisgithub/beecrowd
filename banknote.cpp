#include<iostream>

using namespace std;

int main(){
    int note;
    int rem;
    cin>>note;
    cout<<note<<endl;
    cout<<note/100<<" nota(s) de R$ 100,00"<<endl;
    rem=note%100;
    cout<<rem/50<< " nota(s) de R$ 50,00"<<endl;
    rem = rem%50;
    cout<<rem/20<<" nota(s) de R$ 20,00"<<endl;
    rem = rem%20;
    cout<<rem/10<<" nota(s) de R$ 10,00"<<endl;
    rem = rem %10;
    cout<<rem/5<<" nota(s) de R$ 5,00"<<endl;
   rem = rem % 5;
   cout<<rem/2<<" nota(s) de R$ 2,00"<<endl;
   rem = rem% 2;
   cout<<rem/1 <<" nota(s) de R$ 1,00"<<endl;

return 0;
}
