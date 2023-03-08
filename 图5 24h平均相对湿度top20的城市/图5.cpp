#include<bits/stdc++.h>
using namespace std;
const int N=100;
struct node{
	string cn;
	double ch;
}v[N];
int main()
{
	string city_name;
	string city_humidity;
	freopen("res/w6.txt","r",stdin);
	int idx=0;
	while (cin >> city_name  >> city_humidity) {
		//cout<<city_name<<" "<<city_temperature <<" "<< city_rain << " " << city_wind << city_pressure << city_humidity << endl;
		double n5=atof(city_humidity.c_str());
		v[idx].cn=city_name;
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
		cout << "'" << v[i].ch << "'" << ",";
	}
	cout << "'" << v[idx-1].ch << "']" << endl;
}
