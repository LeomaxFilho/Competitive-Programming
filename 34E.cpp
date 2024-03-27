#include <iostream>
#include <vector>
class ball
{
    public:
    double velcity;
    double coordinates;
    double weight;

    ball(double v, double x, double w) : velcity(v), coordinates(x), weight(w){}
    ~ball();
};



int main(){
    int n, t;
    std::cin >> n;
    std::cin >> t;
    std::vector<ball> bal(n);

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> bal[i].velcity;
    }
    
    

    return 0;
}