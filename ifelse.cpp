#include <iostream>

using namespace std;

int main() 
{
    int salary;
    float sum = 0,pf,df,hra;
    cout<<"Enter The Salary Amount : ";
    cin>>salary;

    if (salary<=5000)
    {
        cout<<"Your Salary is "<<salary;
    }
    else if (salary > 5000 && salary <= 10000)
    {
        pf = salary * 8 / 100.0;
        cout<<"PF Is : "<<pf<<endl;
        df = salary * 10 / 100.0;
        cout<<"DF Is : "<<df<<endl;
        hra = salary * 12 / 100.0;
        cout<<"HRA Is : "<<hra<<endl;
        sum = salary + pf - df - hra;
        cout<<"Your Salary About : "<<sum<<endl;
    }
    else if (salary > 10000 && salary<= 20000)
    {
        pf = salary * 10 / 100.0;
        cout<<"PF Is : "<<pf<<endl;
        df = salary * 12 / 100.0;
        cout<<"DF Is : "<<df<<endl;
        hra = salary * 15 / 100.0;
        cout<<"HRA Is : "<<hra<<endl;
        sum = salary + pf - df - hra;
        cout<<"Your Salary About : "<<sum<<endl;
    }
    else if (salary < 20000)
    {
        pf = salary * 12 / 100.0;
        cout<<"PF Is : "<<pf<<endl;
        df = salary * 15 / 100.0;
        cout<<"DF Is : "<<df<<endl;
        hra = salary * 18 / 100.0;
        cout<<"HRA Is : "<<hra<<endl;
        sum = salary + pf - df - hra;
        cout<<"Your Salary About : "<<sum<<endl;
    }
    
    
    
    
    return 0;
}
