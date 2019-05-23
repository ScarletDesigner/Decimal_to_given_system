#include <iostream>
#include <fstream>
using namespace std;

string toGivenSystem(int a, int system)
{
	string result = "";
	while(a > 0)
	{
		char lastDigit = '0' + a % system;
		result = lastDigit + result;
		a = a / system;
	}
	
	return result;
}

int toDecimal(string a, int system)
{
	int sum = 0;
	for(int i = 0; i < a.size(); i++)
	{
		int digitValue = a[i] - '0';
		sum = sum * system + digitValue;
	}
	return sum;
}

int main(){
	cout << toDecimal("1021", 3) << endl;
	cout << toGivenSystem(34, 3) << endl;
	
	return 0;
}
