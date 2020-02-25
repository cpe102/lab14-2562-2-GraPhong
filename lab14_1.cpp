#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z= &x;

	cout << a << "\t\t &a = " << &a <<"\n";
	cout << b << "\t\t &b = " << (int*)&b <<"\n";
	cout << c << "\t\t &c = " << (int*)&c <<"\n";
	cout << x << "\t &x = " << &x <<"\n";
	cout << y << "\t\t  &y = " << (int*)&y <<"\n";
	cout << z << "\t &z = " << &z <<"\n";
	cout << "--------------------------------\n";
	
	c = 'F';
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << x << "\n";
	cout << (int*)y << "\n";
	cout << z << "\n";
	cout << "--------------------------------\n";
	
	*y = 'W';
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << x << "\n";
	cout << (int*)y << "\n";
	cout << z << "\n";
	cout << "--------------------------------\n";
	
	*x = 6;
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << x << "\n";
	cout << (int*)y << "\n";
	cout << z << "\n";
	cout << "--------------------------------\n";
	
	**z = 7;
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << x << "\n";
	cout << (int*)y << "\n";
	cout << z << "\n";
	cout << "--------------------------------\n";
	
	return 0;
}
