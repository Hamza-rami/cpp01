#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
    //protect N
    Zombie* hord = new Zombie[N];
    for (int i = 0; i < N; i++)
        hord[i].setname(name);
    return hord;
}
