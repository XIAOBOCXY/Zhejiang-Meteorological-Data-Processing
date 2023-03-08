#include<bits/stdc++.h>
using namespace std;
const int N=100;
struct node{
	string cn;
	double ct;
	double cr;
	double cw;
	double cp;
	double ch;
}v[N];
int main()
{
	string city_name;
	string city_temperature;
	string city_rain;
	string city_wind;
	string city_pressure;
	string city_humidity;
	freopen("w1.txt","r",stdin);
	int idx=0;
	while (cin >> city_name >> city_temperature >> city_rain >>city_wind >> city_pressure >> city_humidity) {
		//cout<<city_name<<" "<<city_temperature <<" "<< city_rain << " " << city_wind << city_pressure << city_humidity << endl;
		double n1=atof(city_temperature.c_str());
		double n2=atof(city_rain.c_str());
		double n3=atof(city_wind.c_str());
		double n4=atof(city_pressure.c_str());
		double n5=atof(city_humidity.c_str());
		v[idx].cn=city_name;
		v[idx].ct=n1;
		v[idx].cr=n2;
		v[idx].cw=n3;
		v[idx].cp=n4;
		v[idx].ch=n5;
		idx++;
	}
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].cn << "'" << ",";
	}
	cout << "'" << v[idx-1].cn << "']" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].ct << "'" << ",";
	}
	cout << "'" << v[idx-1].ct << "']" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].cr << "'" << ",";
	}
	cout << "'" << v[idx-1].cr << "']" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].cw << "'" << ",";
	}
	cout << "'" << v[idx-1].cw << "']" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].cp << "'" << ",";
	}
	cout << "'" << v[idx-1].cp << "']" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].ch << "'" << ",";
	}
	cout << "'" << v[idx-1].ch << "']" << endl;
	return 0; 
}
