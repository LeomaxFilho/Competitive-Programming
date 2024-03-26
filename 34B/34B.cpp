#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n, m;
    int a = 0;

    std::cin >> n;
    std::cin >> m;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        
        std::cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < m; i++)
    {
        if (arr[i] <= 0)
        {
            a += arr[i];
        }
    }
    if (a < 0)
    {
        std::cout << a*-1;
    }else std::cout << a;
    
    
    return 0;
}   