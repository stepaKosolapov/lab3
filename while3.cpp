#include <iostream>

using namespace std;

int main()
{
    int A, B, counter;
    cout << "Input A and B: ";
    cin >> A >> B;
    counter = 0;
    while(A >= B)
    {
        counter += 1;
        A -= B;
    }
    cout << "Integer: " << counter << " Remains: " << A;
    return 0;
}
