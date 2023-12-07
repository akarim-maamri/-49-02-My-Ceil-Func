#include<iostream>
using namespace std;
float GetNumber()
{
	float fNumber;
	cout << "enter Number:" << endl;
	cin >> fNumber;
	return fNumber;
}
int MyCeilFun(float fNumber)
{
	int iNumber = int(fNumber);
	float R = fNumber - iNumber;
	if (iNumber > 0)
	{
		return iNumber + 1;
	}
	else
	{
		return fNumber - R;
	}
}
int main()
{
	float fNumber = GetNumber();
	cout << "\nMy Ceil Result:" << MyCeilFun(fNumber);
	cout << "\nC++ Ceil Result:" << ceil(fNumber);
	return 0;
}