#include<iostream>
using namespace std;
void Add(int a = 0, int b = 0)
{
	cout << "sum is:" << a + b << endl;
}
void Sub(int a = 0, int b = 0, int c = 0)
{
	cout << "Diff is :" << a - b - c << endl;
}

int main()
{
	Add(2, 5);
	Add(2, 8);
	Sub(0, 6, 9);
	Sub(7, 98, 543);

}