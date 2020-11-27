#include <iostream>

using namespace std;

int main()
{
    int K, N, num, sum;
    bool flag;
    cout << "Input K and N: ";
    cin >> K >> N;
    for(int i = 0; i < K; i++)
    {
        flag = false;
        sum = 0;
        for(int i = 0; i < N; i++)
        {
            cin >> num;
            if(num == 2) flag = true;
            sum += num;
        }
        if(flag) cout << sum << endl;
        else cout << 0 << endl;
    }
    return 0;
}
