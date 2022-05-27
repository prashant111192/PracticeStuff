#include <iostream>

class cat
{
public:
    int x;
    int x1;
    // int x2=3;
    // int x3=4;
    // int y=5;
    cat();
    ~cat();
};

cat::cat()
{
    x=2;
    x1=2;
}
int choose(int x = 0);

int main()
{
    unsigned int n = 4;
    n = choose(n);
    cat c;
    std::cout << sizeof(cat) << std::endl;
    std::cout<<c.x;
    std::cout << n << "<-valune of n \n";
    n = 0;
    n = choose();
    std::cout << n << "<-valune of n \n";
    // enum color
    // {
    //     red,
    //     blue,
    //     green
    // };
    // std::cout << blue << std::endl;
    // for (unsigned int i=1;; i++)
    // {
    //     if (i<n)
    //     {
    //         std::cout<< "n ="<< n<< std::endl;
    //         break;
    //     }
    //     n++;
    // }
    return 0;
}
int choose(int x)
{
    if (x == 0)
    {
        x = x + 100;
    }

    else
    {
        x = x * (2);
    }

    return x;
}