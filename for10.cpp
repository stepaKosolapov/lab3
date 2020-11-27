#include <iostream>

using namespace std;

int main()
{
    int N;
    float sum;
    cout << "Input N: ";
    cin >> N;
    sum = 0;
    for(int i = 1; i <= N; i++)
    {
        sum += 1 / float(i); 
    }
    cout << "sum = " << sum;
    return 0;
}
