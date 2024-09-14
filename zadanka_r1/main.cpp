#include <iostream>
#include <math.h>
#include <numeric>
#include <vector>


void zad1_1();
void zad1_2();
void zad1_3();
void zad1_3a(std::vector<int>&&); // lub const & bo obiekt tymczasowy mozemy przypisac do const & lub &&
int lcm(int const, int const);
template<class InputIt>
int lcmr(InputIt, InputIt);

int main()
{
    std::cout<<"Hello\n";
    zad1_3a({10,11,31});
    return 0;
}

void zad1_3a(std::vector<int> &&vec)
{
    std::cout<< "3a: NWW = " << lcmr(vec.begin(), vec.end());
}
void zad1_3()
{
    std::cout<<"Wprowadz dwie liczby po spacji\n";
    uint32_t a,b, r;
    std::cin>>a>>b;
    std::cout<<"Liczby to: a = "<<a<<" b = "<<b<<"\n";

    r = lcm(a,b);
    std::cout<< "Najmniejsza wspolna wielokrotnosc to " << r;
}

int lcm(const int a, const int b)
{
    int h =std::gcd(a,b);
    return h ? (a * (b / h)) : 0;
}

template<class InputIt>
int lcmr(InputIt first, InputIt last)
{
    return std::accumulate(first, last, 1, lcm);
}

void zad1_2()
{
    std::cout<<"Najwiekszy wspolny dzielnik\n";
    std::cout<<"Wprowadz dwie liczby po spacji\n";
    
    uint32_t a,b, r;

    std::cin>>a>>b;
    std::cout<<"Liczby to: a = "<<a<<" b = "<<b<<"\n";
    // while (b != 0)
    // {
    //     r = a % b;
    //     a = b;
    //     b = r;
    // }   

    a = std::gcd(a,b);
    std::cout<<"GDB: "<<a;
    
}

void zad1_1()
{
    // Suma liczb naturalnych podzielnych przez 3 lub 5
    uint32_t liczba;
    uint64_t suma;
    std::cout<<"Wprowadz liczbe: ";
    std::cin>>liczba;

    for (int i = 0; i < liczba; i++)
    {
        if((i % 3 == 0) || (i % 5 == 0))
        {
            suma += i;
        }
    }

    std::cout<<"Suma: "<<suma;
}
