#include<bits/stdc++.h>
using namespace std;
const int N=100;
struct node{
	double ct;
}v[N];
int main()
{
	string city_temperature;
	freopen("res/w9-7.txt","r",stdin);
	int idx=0;
	while (cin >> city_temperature) {
		double n1=atof(city_temperature.c_str());
		v[idx].ct=n1;
		idx++;
	}
	
	cout << "data:[";
	for(int i=0;i<idx-1;i++){
		cout << "'" << v[i].ct << "'" << ",";
	}
	cout << "'" << v[idx-1].ct << "']" << endl;
}
