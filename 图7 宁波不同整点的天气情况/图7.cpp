#include<bits/stdc++.h>
using namespace std;
const int N=10;
struct node{
	double ct;
	double cj;
	double cf;
	double cq;
	double cx; 
}v[N];
int main()
{
	string city_name;
	string city_temperature;
	string city_rain;
	string city_wind;
	string city_pressure;
	string city_humidity;
	freopen("w8.txt","r",stdin);
	int idx=0;
	while (cin >> city_name >> city_temperature >> city_rain >> city_wind >> city_pressure >> city_humidity ) {
		//cout<<city_name<<" "<<city_temperature <<" "<<endl;
		double n1=atof(city_temperature.c_str());
		double n2=atof(city_rain.c_str());
		double n3=atof(city_wind.c_str());
		double n4=atof(city_pressure.c_str());
		double n5=atof(city_humidity.c_str());
		v[idx].ct=n1;
		v[idx].cj=n2;
		v[idx].cf=n3;
		v[idx].cq=n4;
		v[idx].cx=n5;
		idx++;
	}
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout <<  v[i].ct << "," ;
	}
	cout << v[idx-1].ct << "]" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout <<  v[i].cj << "," ;
	}
	cout << v[idx-1].cj << "]" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout <<  v[i].cf << "," ;
	}
	cout << v[idx-1].cf << "]" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout <<  v[i].cq << "," ;
	}
	cout << v[idx-1].cq << "]" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout <<  v[i].cx << "," ;
	}
	cout << v[idx-1].cx << "]" << endl;
}
