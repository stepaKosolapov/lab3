#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N;
    float num;
    cout << "Input N: ";
    cin >> N;
    for(int i; i <= N; i++)
    {
        cin >> num;
        cout << pow(num, num) << " ";
    }
    return 0;
}
