#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    int nlj, days;
    int big = 0;
    int low;
    std::cin >> nlj;
    //precisa do tamanho do vetor
    std::vector<int> lj(nlj);

    int din, din1;
    int tot = 0;

    for (int i = 0; i < nlj; i++)
    {
        
        std::cin >> lj[i];
        if (i == 0)
        {
            low = lj[i];
        }
        
        if (big < lj[i])
        {
            big = lj[i];
            continue;
        }
        if (low > lj[i])
        {
            low = lj[i];
            continue;
        }
    }
    std::sort(lj.begin(), lj.end());

    std::cin >> days;
    std::vector<int>::iterator up;
    for (int i = 0; i < days; i++)
    {
        
        std::cin >> din;
        //aqui eu analiso se o numero antigo e igual ao
        if (din1 == din)
        {
            std::cout << tot << "\n";
            continue;
        }else{
            tot = 0;
        }
        //caso o valor seja o mesmo do anterior ele mantem dando o mesmo valor que o anterior
        din1 = din;

        if (din >= big)
        {
            tot = nlj;
            std::cout << tot << "\n";
            continue; 
        }else if (din < low)
        {
            std::cout << tot << "\n";
            continue; 
        }
        /*
        for ( int j = 0; j < nlj; j++)
        {
            if (din >= lj[j])
            {
                tot ++;
            }else{
                break;
            }
        }
        */
       //**************
       // fazendo a pesquisa por busca binaria o processo é mais rapido
       up= std::upper_bound (lj.begin(), lj.end(), din);
       tot = (up - lj.begin());

        std::cout << tot << "\n";
    }
    return 0;

}