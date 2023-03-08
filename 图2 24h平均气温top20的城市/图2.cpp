#include<bits/stdc++.h>
using namespace std;
const int N=100;
struct node{
	string cn;
	double ct;
}v[N];
int main()
{
	string city_name;
	string city_temperature;
	freopen("res/w2.txt","r",stdin);
	int idx=0;
	while (cin >> city_name >> city_temperature) {
		//cout<<city_name<<" "<<city_temperature << endl;
		double n1=atof(city_temperature.c_str());
		v[idx].cn=city_name;
		v[idx].ct=n1;
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
}
