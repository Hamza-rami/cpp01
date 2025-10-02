#include "Zombie.hpp"


int main()
{
    int N = 444444444;
    Zombie *hord = zombieHorde(N, "hamza");
    if (!hord)
        return 1;
    for (int i = 0; i < N; i++)
    {
        hord[i].announce();
    }
    delete[] hord;
}
