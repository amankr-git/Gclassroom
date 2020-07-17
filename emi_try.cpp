
#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
float principal, rate, time,emi;
int tpmt,tist;
cout<<"Enter the Loan amount: ";
cin>>principal;
cout<<"Enter rate of intrest: ";
cin>>rate;
cout<<"Enter time in year: ";
cin>>time;
rate=rate/(12*100); /*one month interest*/
time=time*12; /*one month period*/
emi= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1);
cout<<"Monthly EMI is= "<<emi<<endl;
tpmt=emi*time;
cout<<"Total payments made over the loan term= "<<tpmt<<endl;
tist=tpmt-principal;
cout<<"Total interest payable over the loan term = "<<tist;
return 0;

}


/*#include<iostream>
#include<math.h>			
 using namespace std;
 
{
	float principal,rate,time,emi,rateinm,timeinm;
	cout<<"Enter Principle(amount), Rate (in years) and Time(in years):\n";
	cin>>principal>>rate>>time;
	rateinm=rate/(12*100);
	timeinm=time*12;
	cout<<"Rate in months="<<rateinm;
	cout<<"Time in months="<<timeinm;
	emi=(principal*rateinm*pow((1+rateinm,timeinm));			 
	
	
	cout<<"emi = "<<emi;
   return 0;
}*/
