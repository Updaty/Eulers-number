#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
	int N;
	cin>>N;
	double euler;

	//our number of counted digits
	int sum = 0;

	//the number to add to euler's. Represents the last "1/k!" element
	double addend = 1;

	for(int i = 0;to_string(addend)[N+2]=='0';i++){
		euler+=addend;
		addend = 1/tgamma(i+1);
		if(to_string(addend)[i+2]=='0'){
			sum += to_string(euler)[i+2] - '0';
			euler *= 10;
		}
	}
	cout<<sum;
}