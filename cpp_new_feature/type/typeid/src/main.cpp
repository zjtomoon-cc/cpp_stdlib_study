#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
		int x = 1;
		double y = 5.5;
		cout << typeid(x).name() << endl;
		cout << typeid(x + y).name() << endl;
		cout << typeid(int).name() << endl;
    return 0;
}
