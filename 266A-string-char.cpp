#include <iostream>
#include <cstring>

int main(){

    int count;
    int num;
    std::cin >> count;
    char c[count+1];
    std::string t;
    std::cin >> t;

    // transformar a string em CHAR;
    strcpy(c, t.c_str());

    for (int i = 0; i < count; i++)
    {
            if (c[i] == c[i+1])
            {
                num++;
            }
    }
    std::cout << num;
}