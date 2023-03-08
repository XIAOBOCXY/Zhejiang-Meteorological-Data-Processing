#include<bits/stdc++.h>
using namespace std;
const int N=100;
struct node{
	string cn;
	double cp;
}v[N];
int main()
{
	string city_name;
	string city_pressure;
	freopen("res/w5.txt","r",stdin);
	int idx=0;
	while (cin >> city_name >> city_pressure) {
		//cout<<city_name<<" "<<city_temperature <<" "<< city_rain << " " << city_wind << city_pressure << city_humidity << endl;
		double n4=atof(city_pressure.c_str());
		v[idx].cn=city_name;
		v[idx].cp=n4;
		idx++;
	}
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].cn << "'" << ",";
	}
	cout << "'" << v[idx-1].cn << "']" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].cp << "'" << ",";
	}
	cout << "'" << v[idx-1].cp << "']" << endl;
	

}
