#include <bits/stdc++.h>
using namespace std;

int main()
{
    float A, B, n, z, X;
    cin >> A;
    cin >> B;
    cin >> n;

    z = B/A;
    if (A == 0 && B ==0)
    {
        cout << 5;
        return 0;
    }
    if (A == 0 && B !=0 )
    {
        cout << "No solution";
        return 0;
    }
    
    
    if (z < 0)
    {
        X = -1*pow(-1*z, 1/n);
    }else
        X = pow(z, 1/n);
    
    if ((abs(X)-(int)abs(X)) > pow(10,-4))
    {
        cout << "No solution";
    }else
        cout << X;

    return 0;
}