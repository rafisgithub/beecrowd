#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int employeesNumber;
    int workHours;
    float perHourSalary;
    float TotalSalary;
    
    cin>>employeesNumber;
    cin>>workHours;
    cin>>perHourSalary;
    
    TotalSalary=perHourSalary*workHours;
    
    cout<<"NUMBER = "<<employeesNumber<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<TotalSalary<<endl;
    
    
 
    return 0;
}
