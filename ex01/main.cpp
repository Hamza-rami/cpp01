#include "Zombie.hpp"


int main()
{
    int N = 4;
    Zombie *hord = zombieHorde(N, "hamza");
    for (int i = 0; i < N; i++)
    {
        hord[i].announce();
    }
    delete[] hord;
}