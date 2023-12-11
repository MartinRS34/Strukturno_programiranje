#include <iostream>

using namespace std;
int main(){
    int date,calculate_date=0,calculate_month=0,calculate_year=0;
    cin>>date;
    //18091992
    calculate_date=date/1000000;
    calculate_month=(date/10000)%10;
    calculate_year=(date%10000);
    cout<<"Denot i mesecot se: "<<calculate_date;
    cout<<"."<<calculate_month;
    cout<<"."<<calculate_year;

}