#include<iostream>
using namespace std;
class Currency
{
public:
float amount;
int fcrr,tcrr;
double result;
void showMenu();
void inputdata();
void cal();
};
void Currency::showMenu()
{
cout<<"(1) USD:United States Dollar\t(2) JPY:Japanese Yen\n\n";
cout<<"(3) CAD:Canadian Dollar\t\t(4) CHF: Swiss Franc\n\n";
cout<<"(5) CNY:Chinese Yuan\t\t(6) EUR:Euro\n\n";
cout<<"(7) SGD:Singapore Dollar\t(8) INR:Indian Rupee\n\n";
cout<<"(9) AUD:Australian Dollar\t(10) BRL:Brazilian Real";
}
void Currency::inputdata()
{
cout<<"\n\nFrom Currency = ";
cin>>fcrr;
cout<<"\n\nTo Currency = ";
cin>>tcrr;
cout<<"\nEnter Amount = ";
cin>>amount;
}
void Currency::cal()
{
double AUD[10]={1.0,3.44065,0.92961,0.70654,4.7783,0.68612,1.01512,52.77837,0.74438,95.27039};
double BRL[10]={0.29064,1.0,0.27009,0.20558,1.38686,0.19961,0.29495,16.48581,0.21634,27.77443};
double CAD[10]={1.07753,3.70243,1.0,0.76116,5.13474,0.73906,1.09203,61.03756,0.80098,102.8329};
double CHF[10]={1.41565,4.86421,1.31379,1.0,6.74596,0.97096,1.43469,80.19051,1.05231,135.10078};
double CNY[10]={0.20985,0.72106,0.19475,0.14824,1.0,0.14393,0.21267,11.88719,0.15599,20.02691};
double EUR[10]={1.45798,5.00968,1.35305,1.0299,6.9477,1.0,1.4776,82.58859,1.08378,139.14094};
double SGD[10]={0.98672,3.39042,0.91573,0.69701,4.70202,0.67677,1.0,55.89381,0.73348,94.16697};
double INR[10]={0.01765,0.06066,0.01638,0.01247,0.08412,0.01211,0.01789,1.0,0.01312,1.68475};
double USD[10]={1.34527,4.6224,1.24848,0.95029,6.4106,0.92269,1.36337,76.204,1.0,128.38451};
double JPY[10]={0.01048,0.036,0.00972,0.0074,0.04993,0.00719,0.01062,0.59356,0.00779,1.0};
switch(fcrr)
{

case 1:result=amount*USD[tcrr-1];
break;
case 2:result=amount*JPY[tcrr-1];
break;
case 3:result=amount*CAD[tcrr-1];
break;
case 4:result=amount*CHF[tcrr-1];
break;
case 5:result=amount*CNY[tcrr-1];
break;
case 6:result=amount*EUR[tcrr-1];
break;
case 7:result=amount*SGD[tcrr-1];
break;
case 8:result=amount*INR[tcrr-1];
break;
case 9:result=amount*AUD[tcrr-1];
break;
case 10:result=amount*BRL[tcrr-1];
break;
default:cout<<"Enter Valid Index Number";
break;
}
cout<<"\n\nAfter Convert = "<<result;
}
int main()
{
Currency C;
C.showMenu();
C.inputdata();
C.cal();
return 0;
}