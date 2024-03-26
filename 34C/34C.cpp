#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr;
    string number_as;
    //retirar as virgulas e adicionar ao vetor
    while (std::getline(cin,number_as, ','))
    {
        arr.push_back(std::stoi(number_as));
    }

    //ordenar e remover repetidos
    unordered_set<int> ud;
    for (int i : arr)
        ud.insert(i);
    arr.assign( ud.begin(), ud.end() );
    sort( arr.begin(), arr.end() );

    int f = arr[0];

    for (int i = 0; i <= arr.size(); i++) {
        if (i == arr.size() || (arr[i] - arr[i-1] > 1)) {

            if (f == arr[i - 1])
            {
                std::cout << f;
            }else cout << f << "-" << arr[i - 1];

            if (i != arr.size()) {f = arr[i]; cout << ",";}
        }
    }
    return 0;
}