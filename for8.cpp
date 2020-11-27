#include <iostream>

using namespace std;

int main()
{
	int a, b, product;
    cout << "Input A and B: ";
    cin >> a >> b;
    product = 1;
    for(int i = a; i <= b; i++)
        product *= i; 
    cout << "The product of A and B: " << product;
    return 0;
}
