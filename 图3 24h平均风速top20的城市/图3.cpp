#include<bits/stdc++.h>
using namespace std;
const int N=100;
struct node{
	string cn;
	double cw;
}v[N];
int main()
{
	string city_name;
	string city_wind;
	freopen("res/w4.txt","r",stdin);
	int idx=0;
	while (cin >> city_name >>  city_wind ) {
		//cout<<city_name<<" "<<city_temperature <<" "<< city_rain << " " << city_wind << city_pressure << city_humidity << endl;
		double n3=atof(city_wind.c_str());
		v[idx].cn=city_name;
		v[idx].cw=n3;
		idx++;
	}
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].cn << "'" << ",";
	}
	cout << "'" << v[idx-1].cn << "']" << endl;
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].cw << "'" << ",";
	}
	cout << "'" << v[idx-1].cw << "']" << endl;
}
