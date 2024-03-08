#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <vector>

int main(void) {

    int count;
    std::cin >> count;
    std::cin.ignore();

    // como pegar uma linha de inteiros e transformar em inteiros dentro de um vector
    std::string s;
    std::getline( std::cin, s );
    std::istringstream is( s );
    std::vector<int> a( ( std::istream_iterator<int>( is ) ), std::istream_iterator<int>() );
    //-----
    
    for (auto i : a)
    {
        std::cout << i << " ";
    }
    

    return 0;
}