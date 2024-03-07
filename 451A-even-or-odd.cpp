#include <iostream>

using namespace std;

int main(){

    int n, m;
    std:: cin >> n >> m;
        if (n < m)
        {
            if (n%2 == 0)
            {
                cout << "Malvika";
            }else
            {
                cout << "Akshat";
            }
            
        }else
        {
            if (m%2 == 0)
            {
                cout << "Malvika";
            }else
            {
                cout << "Akshat";
            }
        }
}