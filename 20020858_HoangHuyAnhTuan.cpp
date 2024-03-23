//Code is written by HoangHuyAnhTuan - 20020858

#include<iostream>
using namespace std;
void controlDevice(int temperature, int humidity) {
	if(temperature < 18) {
		cout<<"Turn on Heater";
	} else if (temperature > 30) {
		cout<<"Turn on Air-Condition";
	} else {
		cout<<"Turn off Heater and Air-Condition";
	}
	if (humidity < 50) {
		cout<<"Turn on Humidifier";
	} else if (humidity > 70) {
		cout <<"Turn on Fan" ;
	}  else {
		cout <<"Turn off Humidifier and Fan";
	}
}
int main() {
	int temp, humid;
	cout<<"Enter temperature: ";
	cin>>temp;
	cout<<"Enter humidity: ";
	cin>>humid;
	controlDevice(temp,humid);
	return 0;
} 
