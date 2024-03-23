#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int n = 0;
    int a = 0;
    int b = 0;
    int count = 0;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        a += arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        b += arr[i];
        a -= arr[i];
        if (a == b )
        {
            count++;
        }
    }
    cout << count;
    return 0;
}