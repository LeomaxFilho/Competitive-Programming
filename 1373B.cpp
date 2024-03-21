#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int count;
    cin >> count;

    int pos01, pos10;

    int winner;
    string map;
    
    for (int i = 0; i < count; i++)
    {
        cin >> map;
        while (((pos01 = map.find("01")) != -1) || ((pos10 = map.find("10")) != -1))
        {
            if (pos01 != -1)
            {
                map.erase(pos01, 2);
                winner++;
            }else if (pos10 != -1)
            {
                map.erase(pos10, 2);
                winner++;
            }
        }
        if (winner%2 != 0)
        {
            cout << "DA";
        }else cout << "NET";
    }
    return 0;
}